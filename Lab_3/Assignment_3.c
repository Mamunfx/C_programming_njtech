#include <stdio.h>

int main() {
    double f;
    int i=4;
    f = 10/i;
    printf("In this first part of the code where 10 is divided by 4, the result is: %f\n which is incorrect , because C performs integer division when both operands are integers. To get the correct result, we need to cast one of the operands to a double", f);
    return 0;
}

// #include <stdio.h>

// int main() {
//     double f;
//     int i=4;
//     f = 10.0/i;
//     printf(" Like this part of the code where 10.0 is divided by 4, the result is: %f\n", f);
//     return 0;
// }