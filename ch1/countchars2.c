#include <stdio.h>

/* Count symbols in the input stream */
int main() {
    double nc;

    for (nc = 0; getchar() != EOF; ++nc);

    printf("%.0f\n", nc);
}
