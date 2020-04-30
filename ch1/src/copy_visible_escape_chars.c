#include <stdio.h>
#define TAB '\t'
#define BACKSPACE '\b'
#define BACKSLASH '\\'

/* copy input to output, replacing tabs, backspaces and backslashes
 * to visible chars */
int main() {

    for (int c; (c = getchar()) != EOF; ) {
        switch(c) {
            case TAB: 
                printf("\\t");
                break;
            case BACKSPACE:
                printf("\\b");
                break;
            case BACKSLASH:
                printf("\\\\");
                break;
            default:
                putchar(c);
        }
    }
}
