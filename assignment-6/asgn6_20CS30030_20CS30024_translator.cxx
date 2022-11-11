#include "asgn6_20CS30030_20CS30024_translator.h"

/*********************GLOBAL VARIABLES**********************/
vector<Quad *> quadArray;  // Quad Array
SymbolTable *currentTable, *globalTable;  // Symbol Tables
Symbol *currentSymbol;  // Current Symbol
SymbolType::typeEnum currentType;  // Current Type
int tableCount, temporaryCount;  // Counts of number of tables and number of temps generated
/************************************************************/
vector<string> stringLiterals;
// Implementation of activation record class
ActivationRecord::ActivationRecord() : totalDisplacement(0), displacement(map<string, int>()) {}  
/**
 * @brief Parameterized Constructor for SymbolType
 * 
 * @param type enum of given type
 * @param arrayType 
 * @param width width of given type
 */
SymbolType::SymbolType(typeEnum type, SymbolType *arrayType, int width) : type(type), width(width), arrayType(arrayType) {}

/**
 * @brief takes in type as an ENUM (typeEnum defined in header file)
 * 
 * @return int --> size of datatype
 */
int SymbolType::getSize()
{
    if (type == CHAR)
        return 1; 
    else if (type == INT)
        return 4;
    else if (type == FLOAT || type == POINTER)
        return 8;
    else if (type == ARRAY)
        return width * (arrayType->getSize());
    else
        return 0;
}
/**
 * @brief Takes in tupe Enum and returns symbol type as a string
 * 
 * @return string 
 */
string SymbolType::toString()
{
    if(this->type == SymbolType::VOID)
        return "void";
    else if(this->type == SymbolType::CHAR)
        return "char";
    else if(this->type == SymbolType::INT)
        return "int";
    else if(this->type == SymbolType::FLOAT)
        return "float";
    else if(this->type == SymbolType::POINTER)
        return "ptr(" + this->arrayType->toString() + ")";
    else if(this->type == SymbolType::FUNCTION)
        return "function";
    else if(this->type == SymbolType::ARRAY)
        return "array(" + to_string(this->width) + ", " + this->arrayType->toString() + ")";
    else if(this->type ==  SymbolType::BLOCK)
        return "block";
    return "error"; 
}

/**
 * @brief Parameterized Constructor for SymbolTable
 * 
 * @param name Symbol Table Name
 * @param parent parent Symbol Table
 */
SymbolTable::SymbolTable(string name, SymbolTable *parent) : name(name), parent(parent) {}

/**
 * @brief Implements lookup --> returns pointer to symbol table to a variable with name string name
 * 
 * @param name Name of Variable
 * @return Symbol* --> pointer to variable in symbol table
 */
Symbol *SymbolTable::lookup(string name)
{    
    auto it = (this)->symbols.find(name);
    if (it != (this)->symbols.end())
        return &(it->second);
       
    Symbol *return_ptr = nullptr;
    if (this->parent != NULL)
        return_ptr = this->parent->lookup(name);

    if (this == currentTable && !return_ptr)
    {
        return_ptr = new Symbol(name);
        return_ptr->category = Symbol::LOCAL;
        if(currentTable == globalTable)
            return_ptr->category = Symbol::GLOBAL;
        this->symbols.insert({name, *return_ptr});
        return &((this)->symbols.find(name)->second);
    }
    return return_ptr;
}

/**
 * @brief Updates the symbol table with its child tables with the offsets
 * 
 */
void SymbolTable::update()
{
    vector<SymbolTable *> visited; 
    int offset;
    for (auto &map_entry : (this)->symbols)  
    {
        if (map_entry.first == (this->symbols).begin()->first)  
        {
            map_entry.second.offset = 0;
            offset = map_entry.second.size;
        }
        else    
        {
            map_entry.second.offset = offset;
            offset += map_entry.second.size;
        }
        if (map_entry.second.nestedTable)  
        {
            visited.push_back(map_entry.second.nestedTable);
        }
    }
        activationRecord = new ActivationRecord();
    for (auto map_entry : (this)->symbols)
    {
        if (map_entry.second.category == Symbol::PARAMETER)
        {
            if(map_entry.second.size != 0)
            {
                activationRecord->totalDisplacement -= map_entry.second.size;
                activationRecord->displacement[map_entry.second.name] = activationRecord->totalDisplacement;
            }
        }
    }
    for (auto map_entry : (this)->symbols)
    {
        if ((map_entry.second.category == Symbol::LOCAL && map_entry.second.name != "return") || map_entry.second.category == Symbol::TEMPORARY)
        {
            if(map_entry.second.size != 0)
            {
                activationRecord->totalDisplacement -= map_entry.second.size;
                activationRecord->displacement[map_entry.second.name] = activationRecord->totalDisplacement;
            }
        }
    }
    for (auto &table : visited)
    {
        table->update();
    }
}

void SymbolTable::print()
{    
    cout << string(150, '*') << endl;
    cout << "Table Name: " << this->name <<"\t\t Parent Name: "<< ((this->parent)?this->parent->name:"None") << endl;
    cout << string(150, '*') << endl;
    cout << setw(20) << "Name" << setw(40) << "Type" << setw(20) << "Initial Value" << setw(20) << "Offset" << setw(20) << "Size" << setw(20) << "Child" << "\n" << endl;
    vector<SymbolTable *> tovisit;    
    for (auto &map_entry : (this)->symbols)
    {
        cout << setw(20) << map_entry.first;
        fflush(stdout);
                cout << setw(40) << map_entry.second.type->toString();
        cout << setw(20);
        if(map_entry.second.category == Symbol::LOCAL)
            cout << "local";
        else if(map_entry.second.category == Symbol::GLOBAL)
            cout << "global";
        else if(map_entry.second.category == Symbol::FUNCTION)
            cout << "function";
        else if(map_entry.second.category == Symbol::PARAMETER)
            cout << "parameter";
        else if(map_entry.second.category == Symbol::TEMPORARY)
            cout << "temporary";
        cout << setw(20) << map_entry.second.initialValue << setw(20) << map_entry.second.offset << setw(20) << map_entry.second.size;
        cout << setw(20) << (map_entry.second.nestedTable ? map_entry.second.nestedTable->name : "NULL") << endl;
        if (map_entry.second.nestedTable)
        {
            tovisit.push_back(map_entry.second.nestedTable);
        }
    }
    cout << string(150, '-') << endl;
    cout << "\n" << endl;
    for (auto &table : tovisit)
    {
        table->print();
    }
}
/**
 * @brief Parameterized Constructor for Symbol
 * 
 * @param name name of symbol
 * @param type type of symbol
 * @param init initial value of symbol
 */
Symbol::Symbol(string name, SymbolType::typeEnum type, string init) : name(name), type(new SymbolType(type)), offset(0), nestedTable(NULL), initialValue(init)
{
    size = this->type->getSize();
}

/**
 * @brief Updates the type of symbol pointer with the specified type
 * 
 * @param type 
 * @return Symbol* (updated symbol pointer)
 */
Symbol *Symbol::update(SymbolType *type){
    this->type = type;
    size = this->type->getSize();
    return this;
}
/**
 * @brief Converts symbol to given type, and returns the updated symbol
 * 
 * @param type_  new type of symbol
 * @param fin_   final symbol entry with new type
 * @return Symbol* 
 */
Symbol *Symbol::convert(SymbolType::typeEnum type_){   
    if ((this->type)->type == SymbolType::typeEnum::FLOAT)
    {
        if (type_ == SymbolType::typeEnum::INT)
        {       
            Symbol *fin_ = gentemp(type_);
            emit("=", fin_->name, "FLOAT_TO_INT(" + this->name + ")");
            return fin_;
        }
        else if (type_ == SymbolType::typeEnum::CHAR)
        {   
            Symbol *fin_ = gentemp(type_);
            emit("=", fin_->name, "FLOAT_TO_CHAR(" + this->name + ")");
            return fin_;
        }
        return this;
    }
    else if ((this->type)->type == SymbolType::typeEnum::INT)
    {   
        if (type_ == SymbolType::typeEnum::FLOAT)
        {       
            Symbol *fin_ = gentemp(type_);
            emit("=", fin_->name, "INT_TO_FLOAT(" + this->name + ")");
            return fin_;
        }
        else if (type_ == SymbolType::typeEnum::CHAR)
        {   
            Symbol *fin_ = gentemp(type_);
            emit("=", fin_->name, "INT_TO_CHAR(" + this->name + ")");
            return fin_;
        }
        return this;
    }
    else if ((this->type)->type == SymbolType::typeEnum::CHAR)
    {
        if (type_ == SymbolType::typeEnum::INT)
        {       
            Symbol *fin_ = gentemp(type_);
            emit("=", fin_->name, "CHAR_TO_INT(" + this->name + ")");
            return fin_;
        }
        else if (type_ == SymbolType::typeEnum::FLOAT)
        {   
            Symbol *fin_ = gentemp(type_);
            emit("=", fin_->name, "CHAR_TO_FLOAT(" + this->name + ")");
            return fin_;
        }
        return this;
    }
    return this;
}
/**
 * @brief Parameterized Constructor a for Quad
 * 
 * @param result 
 * @param arg1 first argument 
 * @param op   operator
 * @param arg2 second argument
 */
Quad::Quad(string result, string arg1, string op, string arg2) : result(result), op(op), arg1(arg1), arg2(arg2) {}
/**
 * @brief Parameterized Constructor a for Quad
 * 
 * @param result 
 * @param arg1 first argument 
 * @param op   operator
 * @param arg2 second argument
 */
Quad::Quad(string result, int arg1, string op, string arg2) : result(result), op(op), arg1(toString(arg1)), arg2(arg2) {}
/**
 * @brief Prints 3 Address Code quad format
 * 
 * @return * void 
 */
void Quad::print()
{
    auto binary_print = [this]()
    {
        cout << "\t" << this->result << " = " << this->arg1 << " " << this->op << " " << this->arg2 << endl;
    };   
    auto relation_print = [this]()
    {
        cout << "\tif " << this->arg1 << " " << this->op << " " << this->arg2 << " goto " << this->result << endl;
    };
    auto shift_print = [this]()
    {
        cout << "\t" << this->result << " " << this->op[0] << " " << this->op[1] << this->arg1 << endl;
    };
    auto shift_print_ = [this](string tp)
    {
        cout << "\t" << this->result << " " << tp << " " << this->arg1 << endl;
    };
    if (this->op == "=")
    {
        cout << "\t" << this->result << " = " << this->arg1 << endl;
    }
    else if (this->op == "goto")
    {
        cout << "\tgoto " << this->result << endl;
    }
    else if (this->op == "return")
    {
        cout << "\treturn " << this->result << endl;
    }
    else if (this->op == "call")
    {
        cout << "\t" << this->result << " = call " << this->arg1 << ", " << this->arg2 << endl;
    }
    else if (this->op == "param")
    {
        cout << "\t" << "param " << this->result << endl;
    }
    else if (this->op == "label")
    {
        cout << "Function start: " << this->result << endl;
    }
    else if (this->op == "labelend")
    {
        cout << "Function end: " << this->result << endl;
    }
    else if (this->op == "=[]")
    {
        cout << "\t" << this->result << " = " << this->arg1 << "[" << this->arg2 << "]" << endl;
    }
    else if (this->op == "[]=")
    {
        cout << "\t" << this->result << "[" << this->arg1 << "] = " << this->arg2 << endl;
    }
    else if (this->op == "+" or this->op == "-" or this->op == "*" or this->op == "/" or this->op == "%" or this->op == "|" or this->op == "^" or this->op == "&" or this->op == "<<" or this->op == ">>")
    {
        binary_print();
    }
    else if (this->op == "==" or this->op == "!=" or this->op == "<" or this->op == ">" or this->op == "<=" or this->op == ">=")
    {
        relation_print();
    }
    else if (this->op == "=&" or this->op == "=*")
    {
        shift_print();
    }
    else if(this->op == "*=")
    {
        cout << "\t" << "*" << this->result << " = " << this->arg1 << endl;
    }
    else if (this->op == "=-")
    {
        shift_print_("= -");
    }
    else if (this->op == "=str")
    {
        cout << "\t" << this->result << " = " << stringLiterals[atoi(this->arg1.c_str())] << endl;
    }
    else if (this->op == "~")
    {
        shift_print_("= ~");
    }
    else if (this->op == "!")
    {
        shift_print_("= !");
    }
    else
    {
        cout << this->op << this->arg1 << this->arg2 << this->result << endl;
        cout << "INVALID OPERATOR\n";
    }
}

/**
 * @brief Generates Quad given the arguments and result
 * 
 * @param op operator
 * @param result result
 * @param arg1 first argument
 * @param arg2 second argument
 */
void emit(string op, string result, string arg1, string arg2)
{
    Quad *q = new Quad(result, arg1, op, arg2);
    quadArray.push_back(q);
}
void emit(string op, string result, int arg1, string arg2)
{
    Quad *q = new Quad(result, arg1, op, arg2);
    quadArray.push_back(q);
}
/**
 * @brief Implements Back Patch (patches given target address to all elements in given list)
 * 
 * @param list_ list of all places to patch
 * @param addr  target address
 */
void backpatch(list<int> list_, int target_addr)
{   
    for (auto &i : list_)
        quadArray[i-1]->result = toString(target_addr);    
}
void finalBackpatch()
{
    
    int curPos = quadArray.size();
    int lastExit = -1;
    for(auto it = quadArray.rbegin(); it != quadArray.rend(); it++) {
        string op = (*it)->op;
        if(op == "labelend") 
        {
            lastExit = curPos;
        } 
        else if(op == "goto" or op == "==" or op == "!=" or op == "<" or op == ">" or op == "<=" or op == ">=") {
            if((*it)->result.empty()) 
            {
                (*it)->result = toString(lastExit);
            }
        }
        curPos--;
    }
}
/**
 * @brief Initliases list with given address
 * 
 * @param base_addr base address
 * @return list<int> 
 */
list<int> makeList(int base_addr){
    return {base_addr};
}
/**
 * @brief Merges the 2 address lists and returns the merged list
 * 
 * @param first_list first list to merge
 * @param second_list second list to merge
 * @return list<int> 
 */
list<int> merge(list<int> first_list, list<int> second_list){
    
    list<int> ret = first_list;
    ret.merge(second_list);
    return ret;
}
/**
 * @brief Express Class method implementation 
 * 
 */
void Expression::toInt()
{   
    if (this->type == Expression::typeEnum::BOOLEAN)
    {
        
        this->symbol = gentemp(SymbolType::typeEnum::INT);
        backpatch(this->trueList, static_cast<int>(quadArray.size()+1)); 
        emit("=", this->symbol->name, "true");                        
        emit("goto", toString(static_cast<int>(quadArray.size() + 2)));  
        backpatch(this->falseList, static_cast<int>(quadArray.size()+1));  
        emit("=", this->symbol->name, "false");
    }
}
void Expression::toBool()
{
    
    if (this->type == Expression::typeEnum::NONBOOLEAN)
    {
        
        this->falseList = makeList(static_cast<int>(quadArray.size()+1)); 
        emit("==", "", this->symbol->name, "0");                        
        this->trueList = makeList(static_cast<int>(quadArray.size()+1));  
        emit("goto", "");
    }
}

/**
 * @brief Get Next Instruction 
 * 
 * @return int 
 */
int nextInstruction()
{
    
    return quadArray.size() + 1;
}
/**
 * @brief Generated new temporary variable and inserts it in current symbol table
 * 
 * @param type 
 * @param s 
 * @return Symbol* 
 */
Symbol *gentemp(SymbolType::typeEnum type, string s)
{
    Symbol *temp = new Symbol("t" + toString(temporaryCount++), type, s);
    temp->category = Symbol::TEMPORARY;
    currentTable->symbols.insert({temp->name, *temp});
    return temp;
}
/**
 * @brief Changes current table to given table
 * 
 * @param table new current table
 */
void changeTable(SymbolTable *table)
{
    currentTable = table;
}
/**
 * @brief checks whether given symbols are of same type or if it feasible to make them the same type
 * 
 * @param a first Symbol
 * @param b Second Symbol
 * @return true/false --> valid symbols
 */
bool typeCheck(Symbol *&a, Symbol *&b)
{   
    std::function<bool(SymbolType *, SymbolType *)> type_comp = [&](SymbolType *first, SymbolType *second) -> bool
    {
        if (!first and !second)
            return true;
        else if (!first or !second or first->type != second->type)
            return false;
        else
            return type_comp(first->arrayType, second->arrayType);
    };   
    if(type_comp(a->type, b->type))
        return true;
    else if(a->type->type == SymbolType::FLOAT or b->type->type == SymbolType::FLOAT) {
        a = a->convert(SymbolType::FLOAT);
        b = b->convert(SymbolType::FLOAT);
        return true;
    }
    else if(a->type->type == SymbolType::INT or b->type->type == SymbolType::INT) {
        a = a->convert(SymbolType::INT);
        b = b->convert(SymbolType::INT);
        return true;
    }
    else {
        return false;
    }
}
/**
 * @brief Utility functions to convert to string
 * @return string 
 */
string toString(int i)
{
    return to_string(i);
}
string toString(float f)
{
    return to_string(f);
}
string toString(char c)
{
    return string(1, c);
}
















