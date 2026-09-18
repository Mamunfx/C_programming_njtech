#include <stdio.h>
#define lower 0
#define upper 300  
#define step 20
int main(){
    printf("A program to print Fahrenheit to Celsius but definig step and upper lower with #define \n");
    float fahr,celsius;
    fahr=lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%.2f\t%.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
    
    return 0;
}