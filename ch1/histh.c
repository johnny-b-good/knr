#include <stdio.h>

#define MAX 20         // Max length of a word
#define ROWWIDTH 40.0  // Histogram word width

/* Print a histogram of word lengths from the input stream */
int main() {
    int lengths[MAX];
    float rows[MAX];
    int c, i, j, nmoremax, curlen, curstate;
    float maxn;

    curlen = 0;
    nmoremax = 0;
    maxn = 0;
    for (i = 0; i < MAX; ++i) {
        lengths[i] = 0;
    }

    // Collect lengths of words from the input
    while ((c = getchar()) != EOF) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            ++curlen;
        } else {
            if (curlen > 0) {
                if (curlen <= MAX) {
                    ++lengths[curlen - 1];
                } else {
                    ++nmoremax;
                }
            }

            curlen = 0;
        }
    }

    // Find max number of words of a same length
    for (i = 0; i < MAX; ++i) {
        if (maxn < lengths[i]) {
            maxn = lengths[i];
        }
    }

    // Calculate histogram row widths
    for (i = 0; i < MAX; ++i) {
        rows[i] = lengths[i] / maxn * ROWWIDTH;
    }

    printf("Histogram of word lengths from the input stream\n");

    // Print histogram rows
    for (i = 0; i < MAX; ++i) {
        printf("%3d: [", i + 1);
        for (j = 0; j < ROWWIDTH; ++j) {
            if (rows[i] > j) {
                putchar('#');
            } else {
                putchar('.');
            }
        }
        printf("] %d\n", lengths[i]);
    }

    printf("More than %d: %d\n", MAX, nmoremax);
}
