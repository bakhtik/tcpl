#include <stdio.h>

#define IN 1    /* inside a word */
#define OUT 0   /* outside a word */
#define NEWLINE '\n'
#define BLANK ' '
#define TAB '\t'

/* count lines, words, and characters in input */
int main() {
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == NEWLINE) \
            ++nl;
        if (c == BLANK || c == NEWLINE || c == TAB)
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}
