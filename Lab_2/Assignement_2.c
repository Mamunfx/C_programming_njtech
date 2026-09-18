#include <stdio.h>
#include <stdbool.h>

int main() {
    int integerVar = 100;
    float floatVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';
    _Bool boolVar = 0;

    printf("Integer: %d\n", integerVar);
    printf("Float: %.f\n", floatVar);
    printf("Double: %.e\n", doubleVar);
    printf("Double: %.g\n", doubleVar);
    printf("Character: %c\n", charVar);
    printf("Boolean: %i\n", boolVar );

    return 0;
}