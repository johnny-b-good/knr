#include <stdio.h>
#define MAXLINE 1000  // Max line length from the input stream

int max;                // Current max line length
char line[MAXLINE];     // Current line
char longest[MAXLINE];  // Longest line

int get_line(void);
void copy(void);

int main() {
    int len;
    extern int max;
    extern char longest[];

    max = 0;

    while ((len = get_line()) > 0) {
        if (len > max) {
            max = len;
            copy();
        }
    }

    if (max > 0) {
        printf("Max line length from the input stream: %d\n", max);
        printf("%s", longest);
    }

    return 0;
}

/* Read a string into 'line', return it's length */
int get_line(void) {
    int c, i;
    extern char line[];

    // Read characters from the input stream until EOF or \n is encountered,
    // while counting them
    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }

    // If the last character is \n - include it in the result string
    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    // Mark end of the string with zero character
    line[i] = '\0';

    return i;
}

/* Copy string from 'from' to 'to' */
void copy(void) {
    int i;
    extern char line[], longest[];

    i = 0;

    // Copy characters from one string to another until zero char is reached
    while ((longest[i] = line[i]) != '\0') {
        ++i;
    }
}
