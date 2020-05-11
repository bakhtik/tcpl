#include <stdio.h>

#define MAXLINE 1000
#define MINLINE 30

int getline_(char s[], int lim);

// print all input lines that are longer than 80 characters
int main()
{
    char line[MAXLINE];
    int len;
    while ((len = getline_(line, MAXLINE)) > 0)
        if (len >= MINLINE)
            printf("%s", line);

    return 0;
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
