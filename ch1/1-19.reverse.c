#include <stdio.h>

#define MAXLINE 1000

void process_lines(void);
int getline_(char s[], int lim);
char* reverse(char s[], int size);

/* reverse input a line at a time */
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
        printf("%s", reverse(line, len));
}
               
char* reverse(char s[], int size)
{
    char c;
    int j;

    for (int i = 0; i < size/2; ++i) {
        c = s[i];
        j = size - i - 1;
        s[i] = s[j];
        s[j] = c;
    }

    return s;

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
