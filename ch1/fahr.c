#include <stdio.h>

/* Print temperature units conversion table  */
int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;    // Lower range boundary
    upper = 300;  // Upper range boundary
    step = 20;    // Step size

    fahr = lower;

    printf("Temperature units conversion table (Fahrenheit to Celsius)\n");
    printf("%3s %6s\n", "F", "C");

    while (fahr <= upper) {
        celsius = 5.0 / 9.0 * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
