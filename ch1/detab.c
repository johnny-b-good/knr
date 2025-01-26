#include <stdio.h>

#define TABWIDTH 8  // Width of tab in spaces

/* Replace tabs with spaces in the input stream */
int main() {
    char c;
    int cur = 0;
    int i = 0;

    while ((c = getchar()) != EOF) {
        if (c != '\t') {
            printf("%c", c);
            ++cur;
        } else {
            for (i = 0; i < TABWIDTH - cur; ++i) {
                printf(" ");
            }
            cur = 0;
        }
    }

    return 0;
}
