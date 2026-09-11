#include <stdio.h>

int main(void){
    float i;
    for ( i = 0; i < 10 ; i=i+0.5)
    {
        printf("%.1f\n",i);
    }
   return 0; 
}