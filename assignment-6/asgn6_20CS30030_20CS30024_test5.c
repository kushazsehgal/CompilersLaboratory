int printStr(char *s);
int readInt(int *int_ptr);
int printInt(int n);



int main() {
    printStr("\n#### TEST 5 (Loops) ####\n");
    int pow2 = 1;
    printStr("\nPowers of 2 using WHILE loop: ");
    while(pow2 <= 1024) {
        printInt(pow2);
        printStr(" ");
        pow2 = pow2 * 2;
    }
    printStr("\n\n");
    int i,j;
    i = 0;
    printStr("\nStar Patten using FOR loop: \n");
    for(i = 0;i <= 10;i++){
        for(j = i; j <= 10;j++){
            printStr("*");
        }
        printStr("\n");
    }
    printStr("\n");
    int iters, int_ptr;
    printStr("\nTesting DO-WHILE loop:");
    do {
        if(i == 0) {
            printStr("\nEntered do-while loop. Enter number of times you wish to run the loop after this: ");
            int_ptr= readInt(&iters);
            if(int_ptr != 1) {
                printStr("\nInvalid input. Exiting...\n\n");
                return 0;
            }
        } else {
            printStr("\nIteration ");
            printInt(i);
            printStr("\n");
        }
    } while(i++ < iters);

    printStr("\n\n");
    return 0;
}