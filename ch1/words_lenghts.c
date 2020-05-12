#include <stdio.h>

#define IN 1
#define OUT 0
#define NEWLINE '\n'
#define BLANK ' '
#define TAB '\t'
#define MAX 80

void print_asterisks(int n);

/* prints a histogram of the lenghts of input words */
int main() {
    
    int lenghts[MAX];
    for (int i = 0; i < MAX; ++i)
        lenghts[i] = 0;

    int c, nc = 0;
    int min = MAX;
    int max = 0;
    short state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == BLANK || c == NEWLINE || c == TAB) {
            if (state == IN) {
                ++lenghts[nc];
                min = min > nc ? nc : min;
                max = max < nc ? nc : max;
                nc = 0;
            }
            state = OUT;
            continue;
        } else if (state == OUT) {
            state = IN;
        }
        ++nc;
    }

    for (int i = min; i <= max; i++) {
        printf("%2d ", i);
        print_asterisks(lenghts[i]);
        putchar(NEWLINE);
    }

    return 0;
}

void print_asterisks(int n) {
    for (; n > 0; --n)
        putchar('*');
}
