#include <stdio.h>

int main() {
    int fahr ;
    int celsius;
    int lower=100, upper=200, step=50;

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}