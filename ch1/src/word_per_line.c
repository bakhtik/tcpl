#include <stdio.h>

#define IN_WORD 1
#define OUT_WORD 0
#define NEWLINE '\n'
#define BLANK ' '
#define TAB '\t'

/* prints input one word per line */
int main() {
    
    int c;
    short state = OUT_WORD;

    while ((c = getchar()) != EOF) {

        if (c == BLANK || c == NEWLINE || c == TAB) {
            if (state == IN_WORD)
                putchar(NEWLINE);
            state = OUT_WORD;
            continue;
        } else if (state == OUT_WORD)
            state = IN_WORD;
        putchar(c);
 
    }

    return 0;
}
