#include <stdio.h>

/*
    Replace many spaces in the input stream
    to one in the output
*/
int main() {
    int c = 0, ns = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++ns;
        }

        if (c != ' ') {
            ns = 0;
        }

        if (ns <= 1) {
            putchar(c);
        }
    }
}