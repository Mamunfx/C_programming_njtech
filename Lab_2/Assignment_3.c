#include <stdio.h>

int main(){
    printf("A program to print Fahrenheit to Celsius conversion with float values\n");
    float fahr,celsius;
    float lower=0,
    upper=300,
    step=20;
    fahr=lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%g\t%g\n", fahr, celsius);
        fahr = fahr + step;
    }
    
    return 0;
}