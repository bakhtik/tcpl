#include <stdio.h>

#define MAXLINE 

int getline_(char line[], int maxline);
void copy(char to[], char from[]);

// print longest input line
int main()
{
    int line_len;
    int max_line_len = 0;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((line_len = getline_(line, MAXLINE)) > 0)
        if (line_len > max_line_len) {
            max_line_len = line_len;
            copy(longest, line);
        }
    if (max_line_len > 0)
        printf("\nlongest line: %s", longest);

    return 0;
}

// getline: read a line into s, return length
int getline_(char s[], int lim)
{
    int c, i;

    for (i = 0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';

    return i;
}

// copy: copy 'from' into 'to'; assume 'to' is is big enough
void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
