
int printStr(char *s);
int readInt(int *int_ptr);
int printInt(int n);

int testInt(int num) {
    return num;
}

int *testIntPtr(int *numPtr) {
    return numPtr;
}

char testChar(char c) {
    return c;
}

char *testCharPtr(char *cPtr) {
    return cPtr;
}

void testVoid() {
    printStr("\nExecuting Function returning VOID.");
    return;
}

int main() {
    printStr("\n#### TEST 3 (Function calls and returns) ####");
    int n = 10;
    int *nPtr = &n;
    
    printStr("\nExecuting Function returning INT : ");
    int retInt = testInt(n);
    if (retInt == n) {
        printStr("Passed");
    } else {
        printStr("Failed");
    }
    
    printStr("\nExecuting Function returning INT* : ");
    int *retIntPtr = testIntPtr(nPtr);
    if (retIntPtr == nPtr) {
        printStr("Passed");
    } else {
        printStr("Failed");
    }

    char c = 'm';
    char *cPtr = &c;

    printStr("\nExecuting Function returning CHAR : ");
    char retChar = testChar(c);
    if (retChar == c) {
        printStr("Passed");
    } else {
        printStr("Failed");
    }

    printStr("\nExecuting Function returning CHAR* : ");
    char *retCharPtr = testCharPtr(cPtr);
    if (retCharPtr == cPtr) {
        printStr("Passed");
    } else {
        printStr("Failed");
    }

    char *str = "Hello World, I am a string.";
    printStr("\nExecuting Function returning CHAR* :");
    char *retStr = testCharPtr(str);
    if (retStr == str) {
        printStr("Passed");
    } else {
        printStr("Failed");
    }
    printStr("\n");
    printStr(" [ Passed string: ");
    printStr(str);
    printStr(" ], ");
    printStr("[ Returned string: ");
    printStr(retStr);
    printStr(" ]");

    printStr("\nExecuting Function returning VOID : ");
    testVoid();
    printStr("\n\n");
    return 0;
}