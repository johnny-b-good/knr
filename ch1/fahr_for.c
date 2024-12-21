#include <stdio.h>

/* Print temperature units conversion table  */
int main() {
    int fahr;

    printf("Temperature units conversion table (Fahrenheit to Celsius)\n");
    printf("%3s %6s\n", "F", "C");

    for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
        printf("%3d %6.1f\n", fahr, 5.0 / 9.0 * (fahr - 32.0));
    }
}
