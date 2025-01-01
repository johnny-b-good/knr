#include <stdio.h>

#define IN 1  /* Inside a whitespace block */
#define OUT 0 /* Outside a whitespace block */

/* Print the input stream word by word */
int main() {
    int c, state;

    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == OUT) {
                putchar('\n');
            }

            state = IN;
        } else {
            state = OUT;
            putchar(c);
        }
    }
}
