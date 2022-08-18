#include<stdio.h>
#include"myl.h"

#define BUFFER 20
#define DECIMAL 6
#define charzero '0'
#define charminus '-'
#define fullstop '.'
#define endstring '\0'
#define INT_MAX  __INT_MAX__
#define INT_MIN  (-__INT_MAX__ - 1)

int readStr(char *str){
    int length = 0;
    __asm__ __volatile__ (
        "movl $0, %%eax \n\t" 
        "movq $0, %%rdi \n\t"
        "syscall \n\t"
        : "=a"(length)
        :"S"(str), "d"(BUFFER));
    return length;
}

int printStr(char * str){
    int length = 0;
    while(str[length] != endstring)
        length++;
    __asm__ __volatile__(
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        : "S"(str), "d"(length));

    return length;

}

int printInt(int num){
    char str[BUFFER];
    int i = 0;
    if(num == 0){
        str[i++] = charzero;
    }
    else{
        if(num < 0){
            str[i++] = charminus;
            num = -num;
        }
        while(num){
            int digit = num%10;
            str[i++] = (char)(charzero + digit);
            num /= 10;
        }
        int front = (str[0] == charminus ? 1 : 0);
        int back = i - 1;
        while(front < back){
            char temp = str[front];
            str[front++] = str[back];
            str[back--] = temp;
        }
    }
    str[i] = endstring;
    return printStr(str); 
}

int readInt(int * numptr){
    char str[BUFFER];
    int length;
    length = readStr(str);
    if(length < 0){
        // printf("Error in length\n");
        return ERR;
    }
        

    int sign = 1;
    int i = 0;
    if(str[i] == charminus){
        sign = -1;
        i++;
    }
    else if(str[i] == '+')
        i++;

    long int ans = 0;
    while(i < length && (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')){
        // printf("str[%d] is %d\n",i,(int)(str[i]));
        if(str[i] < '0' || str[i] > '9'){
            // printf("str[i] is : %c\n",str[i]);
            // printf("Error at str[i]\n");
            return ERR;
        }
            
        int digit = (int)(str[i] - '0');
        ans*= 10;
        ans += (long int)digit;
        i++;
    }
    ans *= sign;
    if(ans > INT_MAX || ans < INT_MIN){
        return ERR;
    }
    *numptr = (int)ans;
    return OK;   
}

int readFlt(float * numptr){
    char str[BUFFER];
    int length;
    length = readStr(str);
    if(length < 0){
        printf("Error due to length\n");
        return ERR;
    }
        
    int sign = 1;
    int i = 0;
    if(str[i] == charminus){
        sign = -1;
        i++;
    }
    else if(str[i] == '+')
        i++;
    
    float ans = 0.F;
    while(i < length && (str[i] != '.' && str[i] != '\n')){
        if(str[i] < '0' || str[i] > '9'){
            // printf("Error due to str[i]");
            return ERR;
        }
        int digit = (int)(str[i] - '0');
        ans*= 10;
        ans += digit;
        i++;
    }
    if(i < length && str[i] == '.'){
        int div = 10.F;
        i++;
        while(i < length && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')){
            if(str[i] < '0' || str[i] > '9'){
                // printf("Error due to str[i] after decimal\n");
                return ERR;
            }
            float digit = (float)(str[i] - '0');
            float val = digit/div;
            div *= 10;
            ans += val;
            i++;
        }
    }
    ans *= sign;
    *numptr = ans;
    return OK;
}

int printFlt(float num){
    // char str[BUFFER];
    if(num < 0){
        num = -num;
        char c[2] ="-\0";
        printStr(c); 
    }
    int int_part = (int)num;
    num -= int_part;

    int len = 0;
    //print integral part   
    len += printInt(int_part);
    //print decimal point
    char c[2];
    c[0] = fullstop;
    c[1] = endstring;
    len += printStr(c);
    //print fractional part;
    for(int i = 0; i < DECIMAL;i++)
        num *= 10;
    int dec_part = (int)num;
    len += printInt(dec_part);

    return len;
}