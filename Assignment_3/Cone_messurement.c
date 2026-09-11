#include <stdio.h>

int main() {
    float radius = 3, h = 5;

    // Calculate the volume of the cone
    float volume = (1.0 / 3.0) * radius * h;

    // Display the result
    printf("The volume of the cone is: %.2f\n", volume);

    return 0;
}