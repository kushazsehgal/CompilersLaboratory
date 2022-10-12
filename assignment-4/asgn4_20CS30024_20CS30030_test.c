/**********************************
*   // Compilers Lab - Assignment 4
*   // Team Detais - 
*   // Kushaz Sehgal - 20CS30030
*   // Jay Kumar Thakur - 20CS30024
************************************/

inline char lower_case(char ch){return ch;}

const char some_function(volatile int a){
    const char b = 'a';
    return b;
}
// void some_function2(double a[const static 15],int b[const *],int c[]);
enum DAYOFWEEK{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main(){
    int s[6] = { 1, 2, [2]=3 };//this is an inline comment;
    char some_string[] = "Test string :)";
    char c1 = 'c';
    char *c2 = &c1;
    float a = 4.714;
    unsigned short b = +63;
    char c = 'b';
    long d = ~14840;
    // char **some_2d_array = (char) { "a", some_string,"abc" };
    int n1 = 4 * sizeof(char);
    n1 *= n1, n1 /= n1, n1 %= n1;
    n1 += (n1 -= n1);
    n1 <<= (n1 >>= n1);
    n1 &= n1 |= n1 ^= n1;
    const long y = 5;
    const long e = -2;
    // _Bool a = (d > e) ? 1 : 0; 
    /*
    A MULTI LINE COMMENT
    */
    int an_integer_array[10];

    char a_char_array[47];

    enum DAYOFWEEK someday;
    someday = FRIDAY;
    float z;

    if(b > 0){
        b >> 1;
        while(a > 0){
            z++;
            a--;
        }
        b = d | b;
        b << 1;
        
        a = b & (long)4198;
    }

   char a_char;
   for(short i = 0;i < 47;i++){

        if(i == 47)
            a_char = '\0';
        else if(i%2){
            a_char = 'a';
        }
        else a_char = 'b';
    
        if(i < 10){
            if(a >= 100)
                break;
            an_integer_array[i] = b;
        }
   }
    double some_double_value = -419.23e5;
    a = n1 * b / (d * c) % e;
    SOME_LABEL:
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
            break;
    }

    do {
        n1++;
    } while(n1 < 0);

    goto SOME_LABEL;
    return 0;
}