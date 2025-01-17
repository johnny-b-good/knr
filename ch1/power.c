#include <stdio.h>

int power(int base, int n);

/* Test the "power" function */
int main() {
    int i;

    for (i = 0; i < 10; ++i) {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }

    return 0;
}

/* Raise number "base" to power "n" */
int power(int base, int n) {
    int i, p;

    for (i = 0; i < n; ++i) {
        p = base * p;
    }

    return p;
}
