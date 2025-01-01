#include <stdio.h>

/* Count symbols in the input stream */
int main() {
    long nc = 0;

    while (getchar() != EOF) {
        ++nc;
    }

    printf("%ld\n", nc);
}
