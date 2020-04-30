#include <stdio.h>
#define BLANK ' '

/* copy input to output, replacing each string of one or more blanks by a single blank (ex. 1-9) */
int main() {
    int c;  // curr char
    int pc; // previous char
    pc = EOF;

    while ((c=getchar()) != EOF) {
        if (!((c == BLANK) && (c == pc)))
            putchar(c);
        pc = c;
    }
}
