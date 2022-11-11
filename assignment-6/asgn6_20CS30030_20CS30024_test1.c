int printStr(char *s);
int readInt(int *int_ptr);
int printInt(int n);

void testIncDec(int n) {
    printStr("Given Value --> ");
    printInt(n);
}
int min(int num1, int num2) {
    if (num1 < num2)
        return num1;
    else
        return num2;
}
int main() {
    printStr("\n#### TEST 1 (Arithmetic operators) ####");
    int a, b, c, d;
    a = 11;
    b = 7;
    c = -24;
    d = 100;

    printStr("\na = ");
    printInt(a);
    printStr("\nb = ");
    printInt(b);
    printStr("\nc = ");
    printInt(c);
    printStr("\nd = ");
    printInt(d);

    int e = a + b;
    int f = a - b;
    int g = a * b;
    int h = a / b;
    int i = a % b;

    printStr("\n a + b = ");
    printInt(e);
    printStr("\na - b = ");
    printInt(f);
    printStr("\na * b = ");
    printInt(g);
    printStr("\na / b = ");
    printInt(h);
    printStr("\na % b = ");
    printInt(i);

    int a0 = -a + b - c + d + 10;
    int a1 = a * b / c + d - 10;
    int a2 = a + b * c / d - 0;
    int a3 = (a + b) * (-c / d) - 15;
    printStr("\n-a + b - c + d + 10 = ");
    printInt(a0);
    printStr("\na * b / c + d - 10 = ");
    printInt(a1);
    printStr("\na + b * c / d - 0 = ");
    printInt(a2);
    printStr("\n(a + b) * (c / d) - 15 = ");
    printInt(a3);
    printStr("\n-c = ");
    printInt(-c);
    printStr("\n-d = ");
    printInt(-d);

    printStr("\nTest pre increment: ");
    testIncDec(++a);
    printStr(", Value after call = ");
    printInt(a);

    printStr("\nTest post increment: ");
    testIncDec(a++);
    printStr(", Value after call = ");
    printInt(a);

    printStr("\nTest pre decrement: ");
    testIncDec(--a);
    printStr(", Value after call = ");
    printInt(a);

    printStr("\nTest post decrement: ");
    testIncDec(a--);
    printStr(", Value after call = ");
    printInt(a);
    printStr("\nTesting Function :\nMinimum out of a and b : ");
    printInt(min(a,b));
    printStr("\n");
    printStr("\n\n");
    
    return 0;
}