#include <stdio.h>

#define MAXLINE 1000  // Max line length from the input stream
#define MINLINE 80    // Min line length to be printeds

int get_line(char line[], int max);

/* Filter lines longer than MINLINE from the input stream */
int main() {
    int len;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > MINLINE) {
            printf("%s", line);
        }
    }

    return 0;
}

/* Read a string into 'line', return it's length */
int get_line(char line[], int max) {
    int c, i;

    // Read characters from the input stream until EOF or \n is encountered,
    // while counting them
    for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
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
