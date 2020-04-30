#include <stdio.h>
#define BLANK ' '
#define TAB '\t'
#define NEWLINE '\n'

/* counts blanks, tabs and newlines */
int main() {
    double nb, nt, nl;
    nb = nt = nl = 0;

    for (int c; (c = getchar()) != EOF; ) {
        if (c == BLANK)
            ++nb;
        else if (c == TAB)
            ++nt;
        else if (c == NEWLINE)
            ++nl;
    }

    printf("blanks: %.0f\ntabs: %.0f\nnewlines: %.0f\n", nb, nt, nl);
}
