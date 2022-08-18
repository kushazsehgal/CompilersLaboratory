#include "myl.h"
int main(){
    printStr("******* Testing library functions *******\n\n");
    printStr("1. Testing print_string\n");
    char* str1 = "Hello World!";
    int len1 = printStr(str1);
    printStr("\n");
    printStr("Length of string: ");
    printInt(len1);
    printStr("\n");
    char* str2 = "This is my Compilers Assignment 2";
    int len2 = printStr(str2);
    printStr("\n");
    printStr("Length of string: ");
    printInt(len2);
    printStr("\n\n");
    printStr("2. Testing print_int\n");
    int num1 = -3214;
    len1 = printInt(num1);
    printStr("\n");
    printStr("Length of num: ");
    printInt(len1);
    printStr("\n");
    int num2 = 12345;
    len2 = printInt(num2);
    printStr("\n");
    printStr("Length of num: ");
    printInt(len2);
    printStr("\n\n");
    printStr("3. Testing read_int\n");
    printStr("Enter a number: ");
    int num=0;
    if(readInt(&num)==OK){
        printStr("Number succesfully read: ");
        printInt(num);
        printStr("\n");
    }else{
        printStr("Error reading number\n");
    }
    printStr("Enter a number greater than 2147483647: ");
    printStr("\n");
    if(readInt(&num)==OK){
        printStr("Number succesfully read: ");
        printInt(num);
        printStr("\n");
    }else{
        printStr("Error reading number\n");
    }
    printStr("\n\n");
    printStr("4. Testing print_float\n");
    float f1 = -3.14159;
    len1 = printFlt(f1);
    printStr("\n");
    printStr("Length of float: ");
    printInt(len1);
    printStr("\n");
    float f2 = 432.3241;
    len2 = printFlt(f2);
    printStr("\n");
    printStr("Length of float: ");
    printInt(len2);
    printStr("\n\n");
    printStr("5. Testing read_float\n");
    printStr("Enter a float: ");
    float f=0;
    if(readFlt(&f)==OK){
        printStr("Float succesfully read: ");
        printFlt(f);
        printStr("\n");
    }else{
        printStr("Error reading float\n");
    }

}   