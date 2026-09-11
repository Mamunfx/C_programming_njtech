#include <stdio.h>

int main(){
    int fahr,celsius;
    int lower=100,upper=200,step=50;
    for(fahr=lower;fahr<=upper;fahr=fahr+step){
        celsius=5*(fahr-32)/9;
        printf("%d\t%d\n",fahr,celsius);
    }
    return 0;
}