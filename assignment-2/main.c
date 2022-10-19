#include<stdio.h>
#include"myl.h"
int main(){
    // printStr("**************Testing myl.h library functions***********\n");
    // printf("here");
    // printStr("***********1) Testing printStr*********** \n");
    // char* str1 = "This is a sample sentence to test printStr!";
    // int len1 = printStr(str1);
    // printStr("\n");
    // printStr("Length of string: ");
    // printInt(len1);
    // printStr("\n");
    // char* str2 = "Hello World!";
    // int len2 = printStr(str2);
    // printStr("\n");
    // printStr("Length of string: ");
    // printInt(len2);
    // printStr("\n");

    // printStr("***********2) Testing printInt***********\n");
    // int num1 = -59124;
    // len1 = printInt(num1);
    // printStr("\n");
    // printStr("Length of num: ");
    // printInt(len1);
    // printStr("\n");
    // int num2 = 87365;
    // len2 = printInt(num2);
    // printStr("\n");
    // printStr("Length of num: ");
    // printInt(len2);
    // printStr("\n\n");

    // printStr("***********3) Testing readInt***********\n");
    // printStr("Enter a number: ");
    // int num=0;
    // if(readInt(&num)==OK){
    //     printStr("Number succesfully read: ");
    //     printInt(num);
    //     printf("%d",num);
    //     printStr("\n");
    // }else{
    //     printStr("Recieved an Error while reading integer\n");
    // }
    // printStr("Enter a number out of range of int : ");
    // printStr("\n");
    // if(readInt(&num)==OK){
    //     printStr("Number succesfully read: ");
    //     printInt(num);
    //     printStr("\n");
    // }else{
    //     printStr("Recieved an Error while reading integer\n");
    // }
    // printStr("\n\n");

    // printStr("4) Testing printFlt\n");
    // float f1 = -7.41582;
    // len1 = printFlt(f1);
    // printStr("\n");
    // printStr("Length of float: ");
    // printInt(len1);
    // printStr("\n");
    // float f2 = 1932.1526;
    // len2 = printFlt(f2);
    // printStr("\n");
    // printStr("Length of float: ");
    // printInt(len2);
    // printStr("\n\n");

    // printStr("***********5) Testing readFlt***********\n");
    // printStr("Enter a float: ");
    // float f=0;
    // if(readFlt(&f)==OK){
    //     printStr("Float succesfully read: ");
    //     printFlt(f);
    //     printStr("\n");
    // }else{
    //     printStr("Recieved an Error while reading float\n");
    // }
    printf("***********3) Testing readInt***********\n");
    printf("Enter a number: ");
    int num=0;
    if(readInt(&num)==OK){
        printf("Number succesfully read: ");
        // printf(num);
        printf("%d",num);
        // printStr("\n");
    }else{
        printf("Recieved an Error while reading integer\n");
    }

}