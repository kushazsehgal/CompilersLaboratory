
int printStr(char *s);
int readInt(int *int_ptr);
int printInt(int n);

void fillFib(int *fib, int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (i == 0) {
            fib[i] = 0;
        } else if (i == 1) {
            fib[i] = 1;
        } else {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
    }
    // int i;
    for (i = 1; i < 15; i++) {
        printInt(fib[i]);
        printStr(" ");
    }
}


void printOdd(){
    int isprime[31];
    int i,j;
    for(i = 0 ;i <= 30;i++)
        isprime[i] = 1;
    i = 2;
    while(i <= 30){
        if(isprime[i] == 1){
            printInt(i);
            printStr(" ");
            while(j <= 30){
                isprime[j] = 0;
                j = j + i;
            }
        }
        i = i + 1;
    }
}
void printASCII_vowels(){
    char vowels[5];
    vowels[0] = 'a';
    vowels[1] = 'e';
    vowels[2] = 'i';
    vowels[3] = 'o';
    vowels[4] = 'u';
    int i;
    printStr("\nAscii values of vowels :\n");
    for (i = 0; i < 5; i++) {
        printInt(vowels[i]);
        printStr(" ");
    }
}

int main(){
    printStr("\n#### TEST 2 (1-D Arrays) ####");
    printStr("\nPrinting Odd Numbers\n");
    printOdd();
    printStr("\nPrinting Fibonacci Numbers\n");
    int fib[15];
    fillFib(fib, 15);
    
    printStr("\n");
    printASCII_vowels();
    return 0;
}