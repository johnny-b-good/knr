#include <stdio.h>

/* Count spaces, tabs and lines in the input stream */
int main() {
    int c, ns, nt, nl;
    ns = 0;
    nt = 0;
    nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++ns;
        }

        if (c == '\t') {
            ++nt;
        }

        if (c == '\n') {
            ++nl;
        }
    }

    printf("Spaces: %8d\n", ns);
    printf("Tabs: %8d\n", nt);
    printf("Lines: %8d\n", nl);
}