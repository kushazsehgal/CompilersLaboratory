/**********************************
*   // Compilers Lab - Assignment 3
*   // Team Detais - 
*   // Kushaz Sehgal - 20CS30030
*   // Jay Kumar Thakur - 20CS30024
************************************/

#define dummy 1111

typedef struct node{
    int val;
    node* next_node;
}node;

inline char lower_case(char ch);

int main(){
    char* s[4] = "abcd";//this is an inline comment;
    float a = 4.714;
    unsigned short b = 63;
    char c = 'b';
    int n1 = 4 * sizeof(char);
    const long d = 5;
    const long e = -2;
    int a = (d > e) ? 1 : 0;


    int an_integer_array[10];

    char a_char_array[47];

    cout << a << ' ' << d << ' ';
    printf("a = %d, d= %d",a,d);
    if(b > 0){
        b >> 1;
        while(a > 0){
            e++;
            a--;
        }
        a = d | a;
        a << 1;
        
        a = a & (long)4198;
    }

    node* my_node;
    my_node -> val = 2;
   
   for(short i = 0;i < 47;i++){

        if(i == 47)
            a_char_array = '\0'
        else if(i%2){
            a_char_array = 'a';
        }
        else a_char_array = 'b';
    
        if(i < 10){
            my_node -> val = my_node * i;
            my_node -> val = my_node -> val | i;
            if(my_node -> val >= 100)
                break;
            an_integer_array[i] = my_node -> val;
        }
   }
    double some_double_value = 419.23e5;

    switch(c){ // lower case character out A, B or C
        case 'A':
            lower_case(c);
            break;
        case 'B':
            lower_case(c);
            break;
        case 'C':
            lower_case(c);
            break;
        default:
            printf("Already Lower Case");
    }
    return 0;
}