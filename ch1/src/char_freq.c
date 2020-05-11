#include <stdio.h>

#define MAX 256
#define NEWLINE '\n'

/* prints a histogram of the frequencies of diferent characters in its input */
int main() {
    
    int chars[MAX];
    for (int i = 0; i < MAX; ++i)
        chars[i] = 0;

    int c, nc = 0;

    while ((c = getchar()) != EOF)
        ++chars[c];

    //find min
    int min;
    for (int i = 0; i < MAX; ++i)
        if (chars[i] != 0) {
            min = i;
            break;
        }

    //find max
    int max;
    for (int i = MAX-1; i >= 0; --i)
        if (chars[i] != 0) {
            max = i;
            break;
        }

    for (int i = max; i > 0; --i) {
        for (int j = min; j <= max; ++j)
            if (chars[j] == 0)
                break;
            else if (chars[j] >= i)
                printf("  *");
            else
                printf("   ");
        putchar(NEWLINE);
    }
    for (int i = min; i <= max; ++i)
        if (chars[i] != 0)
            printf("%3c", i);
    putchar(NEWLINE);

    return 0;
}
