#include <stdio.h>

#define MAXLINE 1000  // Max line length from the input stream
#define IN 1
#define OUT 0

int get_line(char line[], int max);
int trim(int len, char before[], char after[]);

/* Trim unneeded whitespace chars from ends of lines, also trim empty lines */
int main() {
    int len, new_len;
    char line[MAXLINE];
    char after[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        new_len = trim(len, line, after);
        if (new_len > 0) {
            printf("%s", after);
        }
    }

    return 0;
}

/* Read a string into 'line', return it's length */
int get_line(char line[], int max) {
    char c;
    int i;

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

/* Trim trailing whitespace, return new length */
int trim(int len, char before[], char after[]) {
    int i = len;
    char cur = 0;
    int state = IN;
    int new_len = 0;

    for (i = len - 1; i >= 0; --i) {
        cur = before[i];

        if (state == IN &&
            (cur == '\t' || cur == ' ' || cur == '\0' || cur == '\n')) {
            after[i] = '\0';
        } else {
            state = OUT;
            new_len++;
            after[i] = cur;
        }
    }

    after[new_len] = '\n';

    ++new_len;

    after[new_len] = '\0';

    ++new_len;

    return new_len;
};
