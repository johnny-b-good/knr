#include <stdio.h>

#define LETTERSNUM 26  // Number of letters in Latin script
#define ROWWIDTH 40.0  // Histogram word width

/* Print letter frequency histogram from the input stream */
int main() {
    int letters[LETTERSNUM];
    int rows[LETTERSNUM];

    int c, i, j;
    float maxn;

    for (i = 0; i < LETTERSNUM; ++i) {
        letters[i] = 0;
    }

    // Count letters in the input stream
    while ((c = getchar()) != EOF) {
        if (c >= 'A' && c <= 'Z') {
            ++letters[c - 'A'];
        } else if (c >= 'a' && c <= 'z') {
            ++letters[c - 'a'];
        }
    }

    // Find max number of same character
    for (i = 0; i < LETTERSNUM; ++i) {
        if (maxn < letters[i]) {
            maxn = letters[i];
        }
    }

    // Calculate histogram row widths
    for (i = 0; i < LETTERSNUM; ++i) {
        rows[i] = letters[i] / maxn * ROWWIDTH;
    }

    printf("Histogram of numbers of letters\n");

    // Print histogram rows
    for (i = 0; i < LETTERSNUM; ++i) {
        printf("%c: [", i + 'a');
        for (j = 0; j < ROWWIDTH; ++j) {
            if (rows[i] > j) {
                putchar('#');
            } else {
                putchar('.');
            }
        }
        printf("] %d\n", letters[i]);
    }
}
