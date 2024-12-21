#include <stdio.h>

/* Print temperature units conversion table  */
int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = -50;  // Lower range boundary
    upper = 50;   // Upper range boundary
    step = 5;     // Step size

    celsius = lower;

    printf("Temperature units conversion table (Celsius to Fahrenheit)\n");
    printf("%3s %6s\n", "C", "F");

    while (celsius <= upper) {
        fahr = 9.0 / 5.0 * celsius + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
