#include <stdio.h>

#define MAXLINE 1000  // Max line length from the input stream

int get_line(char line[], int max);
void reverse(int len, char line[], char reverse_line[]);

/* Filter lines longer than MINLINE from the input stream */
int main() {
    int len;
    char line[MAXLINE];
    char reverse_line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        reverse(len, line, reverse_line);
        printf("%s", reverse_line);
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

/* Write given string from 'line' in reverse to 'reverse_line' */
void reverse(int len, char line[], char reverse_line[]) {
    int i = len;
    char cur = 0;
    int new_len = 0;

    for (i = len - 1; i >= 0; --i) {
        cur = line[i];
        reverse_line[new_len] = cur;
        ++new_len;
    }

    reverse_line[new_len] = '\n';

    ++new_len;

    reverse_line[new_len] = '\0';
}
