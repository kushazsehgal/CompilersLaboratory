#include"myl.h"
#include<stdio.h>
#define BUFFER 20
#define DECIMAL 6
#define charzero '0'
#define charminus '-'
#define fullstop '.'
#define endstring '\0'
#define INT_MAX  __INT_MAX__
#define INT_MIN  (-__INT_MAX__ - 1)


/**
 * @brief       reads a string from the console
 * 
 * @param str   stores the readed string in str
 * @return int  the length of the string read from console
 */
int readStr(char *str){
    int length = 0;                         // variable to store length of string
    __asm__ __volatile__ (
        "movl $0, %%eax \n\t"               // 0 <-- eax, calling function read
        "movq $0, %%rdi \n\t"               // 0 <-- rdi, reading from stdin
        "syscall \n\t"                      // executing function --> read from console
        : "=a"(length)                      // length will store the number of characters read from the console
        :"S"(str), "d"(BUFFER*2));          // Pass the parameters to read function, 'str' to esi and 'BUFFER' to edx
    return length;
}
/**
 * @brief        prints a string to the console
 * 
 * @param str    the string to be printed
 * @return int   the length of the string printed
 */
int printStr(char * str){
    int length = 0;
    while(str[length] != endstring)          // Computing length of string
        length++;
    __asm__ __volatile__(
        "movl $1, %%eax \n\t"               // 1 <-- eax, calling function write
        "movq $1, %%rdi \n\t"               // 1 <-- rdi, printing to stdout
        "syscall \n\t"                      // executing function --> printing to console
        :
        : "S"(str), "d"(length));           // Pass the parameters to write function, 'str' to esi and 'length' to edx

    return length;

}
/**
 * @brief       prints a given integer to the console
 * 
 * @param num   the integer to be printed
 * @return int  the length (characters) of the printed integer
 */ 
int printInt(int num){
    char str[BUFFER];
    int i = 0;
    if(num == 0){
        str[i++] = charzero;
    }
    else{
        // If number is negative, print '-'
        if(num < 0){
            str[i++] = charminus;
            num = -num;
        }
        while(num){
            int digit = num%10;
            str[i++] = (char)(charzero + digit);
            num /= 10;
        }
        // Setting front as index just after sign
        int front = (str[0] == charminus ? 1 : 0);
        int back = i - 1;
        // Reversing the numbers to print in correct order 
        while(front < back){
            char temp = str[front];
            str[front++] = str[back];
            str[back--] = temp;
        }
    }
    str[i] = endstring;                 // Adding '/0' character to specify end of string
    return printStr(str); 
}
/**
 * @brief         reads an integer from the console
 * 
 * @param numptr  integer pointer to store the read value  
 * @return int    returns OK on success and ERR on failure to read input
 */
int readInt(int * numptr){
    char str[BUFFER*2];
    int length;
    length = readStr(str);
    
    if(length < 0 || length > BUFFER){      // Raising error on invalid input
        return ERR;
    }
    // Setting sign of integer
    int sign = 1;
    int i = 0;
    if(str[i] == charminus){
        sign = -1;
        i++;
    }
    else if(str[i] == '+')
        i++;

    // Storing in long to check out of bounds error
    long int ans = 0;
    while(i < length && (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')){     //Terminating condition 
        if(str[i] < '0' || str[i] > '9'){       //Raise an error if invalid character is recieved
            return ERR;
        }
        // Updating value of answer based on digit received
        int digit = (int)(str[i] - '0');
        ans*= 10;
        ans += (long int)digit;
        i++;
    }
    ans *= sign;                            // Updating value based on sign
    // Checking out of bounds error
    
    if(ans > INT_MAX || ans < INT_MIN){
        return ERR;
    }
    *numptr = (int)ans;   

    return OK;   
}
/**
 * @brief       reads a floating point number from the console
 * 
 * @param numptr float pointer to store the read floting point number 
 * @return int   returns OK on success and ERR on failure to read input
 */
int readFlt(float * numptr){
    char str[BUFFER*2];
    int length;
    length = readStr(str);

    if(length < 0 || length > BUFFER){      // Raising an error on invalid input
        return ERR;
    }
    // Checking whether sign is explicitly provided
    int sign = 1;
    int i = 0;
    if(str[i] == charminus){
        sign = -1;
        i++;
    }
    else if(str[i] == '+')
        i++;
    
    // Reading integer part
    float ans = 0.0;
    long integer_part = 0;
    while(i < length && (str[i] != '.' && str[i] != '\n')){
        if(str[i] < '0' || str[i] > '9'){       // Raise error if invalid character is received
            return ERR;
        }
        // Updating Value of ans according to digit received
        int digit = (int)(str[i] - '0');
        ans*= 10;
        ans += digit;
        integer_part *= 10;
        integer_part += digit; 
        i++;
    }
    // To ensure value is within bounds
    if(integer_part > INT_MAX || integer_part < INT_MIN){
        return ERR;
    }
    // Reading decimal part
    if(i < length && str[i] == '.'){
        int div = 10.F;
        i++;
        while(i < length && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')){   // Terminating condition
            if(str[i] < '0' || str[i] > '9'){       // Raise error if invalid character is received
                return ERR;
            }
            float digit = (float)(str[i] - '0');
            float val = digit/(float)div;           // Dividing to get decimal value
            div *= 10.F;
            ans += val;
            i++;
        }
    }
    ans *= sign;
    *numptr = (float)ans;
    return OK;
}
/**
 * @brief       prints a floating point number to the console
 * 
 * @param num   floating point value to be printed to the console
 * @return int  return the lenght (characters) of the floating point number
 */
int printFlt(float num){
    if(num < 0){
        num = -num;
        char c[2] ="-\0";
        printStr(c); 
    }
    // calculating integral part
    int int_part = (int)num;
    // storing fractional part in num
    num -= int_part;

    int len = 0;
    //print integral part   
    len += printInt(int_part);
    //print decimal point
    char c[2];
    c[0] = fullstop;
    c[1] = endstring;                   
    len += printStr(c);
    //print decimal part;
    for(int i = 0; i < DECIMAL;i++)
        num *= 10;
    int dec_part = (int)num;
    len += printInt(dec_part);

    return len;
}