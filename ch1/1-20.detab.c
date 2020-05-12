#include <stdio.h>

#define MAXLINE 1000
#define TAB 8

void process_lines(void);
int getline_(char s[], int lim);
char* detab(char s[], int size);
int insert_blanks(char s[], int size, int start);

/* replace tabs in the input with proper number of blanks
 * to space to the next tab stop */
int main()
{
    process_lines();

    return 0;
}

// main routine
void process_lines(void)
{
    char line[MAXLINE];
    int len;

    while ((len = getline_(line, MAXLINE)) > 0)
        printf("%s", detab(line, len));
}
               
char* detab(char s[], int size)
{
    int i = 0;
    int len = size;
    while (s[i] != '\0') {
        if (s[i] == '\t') 
            len = insert_blanks(s, len, i);
        ++i;
    }
    return s;
}

int insert_blanks(char s[], int size, int start) {
    // determine blanks number to next blank stop
    int n_blanks = TAB - start % TAB;
    // shift chars on TAB-1 positions to the right
    for (int i = size; i > start; --i)
        s[i+n_blanks-1] = s[i];

    // insert blanks
    for (int i = start; i < start + n_blanks; ++i)
        s[i] = ' ';

    return size + n_blanks-1;
}

// getline: read a line into s, return length
int getline_(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar())!=EOF && c !='\n'; ++i)
        s[i] = c;
    if (c=='\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}
