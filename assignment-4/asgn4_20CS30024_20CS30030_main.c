#include <stdio.h>
extern int yyparse();

int main() {
    printf("Parsing Test File..\n\n");
    yyparse();
    return 0;
}
