#include <stdio.h>

#define MAXLINE 1000  // Max line length from the input stream

int get_line(char line[], int max);
void copy(char to[], char from[]);

/* Find the largest line from the input stream */
int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;

    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) {
        printf("Max line length from the input stream: %d\n", max);
        printf("%s", longest);
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

/* Copy string from 'from' to 'to' */
void copy(char to[], char from[]) {
    int i;

    i = 0;

    // Copy characters from one string to another until zero char is reached
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
