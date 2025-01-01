#include <stdio.h>

/*
    Replace some whitespace characters in the input
    stream with escape sequences
*/
int main() {
    int c = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            printf("\\n");
        } else if (c == '\t') {
            printf("\\t");
        } else if (c == '\b') {
            printf("\\b");
        } else if (c == '\\') {
            printf("\\\\");
        } else {
            putchar(c);
        }
    }

    printf("\n");
}