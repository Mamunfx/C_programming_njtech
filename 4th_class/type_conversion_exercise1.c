#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 6; i++) {
        int integerValue = i/2; 
        float floatValue = (float)integerValue;
        printf("i = %d, Integer division: %d, Float division: %.2f\n", i, integerValue, floatValue);
    }
    return 0;
}