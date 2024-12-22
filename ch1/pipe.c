#include <stdio.h>

/* Copy the input stream to the output */
int main() {
    int c;

    c = getchar();

    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
