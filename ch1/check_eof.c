#include <stdio.h>

/* Check if comparing input with EOF returns 0 or 1 */
int main() {
    int v;

    while (v = getchar() != EOF) {
        printf("%d", v);
    }
}
