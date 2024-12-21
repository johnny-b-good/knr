#include <stdio.h>

#define LOWER 0    // Lower range boundary
#define UPPER 300  // Upper range boundary
#define STEP 20    // Step size

/* Print temperature units conversion table  */
int main() {
    int fahr;

    printf("Temperature units conversion table (Fahrenheit to Celsius)\n");
    printf("%3s %6s\n", "F", "C");

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d %6.1f\n", fahr, 5.0 / 9.0 * (fahr - 32.0));
    }
}
