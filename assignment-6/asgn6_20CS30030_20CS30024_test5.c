int printStr(char *s);
int readInt(int *int_ptr);
int printInt(int n);

void recursivePrintIntegers(int curr, int till) {
    if (curr > till) {
        return;
    }
    printInt(curr);
    if(curr == till) {
        printStr("\n");
    } else {
        printStr(" ");
        recursivePrintIntegers(curr + 1, till);
    }
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    printStr("\n#### TEST 5 (Recursive function calls) ####");
    int start, end, int_ptr;
    printStr("\nEnter start: ");
    int_ptr = readInt(&start);
    if (int_ptr != 1) {
        printStr("Invalid start\n");
        return 0;
    }
    printStr("Enter end: ");
    int_ptr = readInt(&end);
    if (int_ptr != 1) {
        printStr("Invalid end\n");
        return 0;
    }
    if (start > end) {
        printStr("Invalid range\n");
        return 0;
    }
    printStr("Numbers from ");
    printInt(start);
    printStr(" to ");
    printInt(end);
    printStr(" are: ");
    recursivePrintIntegers(start, end);

    printStr("\n\nEnter value of n (<40) to find the nth fibonacci number: ");
    int n;
    int_ptr = readInt(&n);
    if (int_ptr != 1) {
        printStr("Invalid n\n\n");
        return 0;
    } else if (n >= 40) {
        printStr("n should be less than 40\n\n");
        return 0;
    } else {
        printStr("\nfib(");
        printInt(n);
        printStr(") = ");
        printInt(fibonacci(n));
        printStr("\n\n");
    }
    return 0;
}