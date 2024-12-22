#include <stdio.h>

/* Copy the input stream to the output, 2nd edition */
int main() {
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}
