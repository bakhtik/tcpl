#include <stdio.h>

#define MAXLINE 1000
#define TAB 8

void process_lines(void);
int getline_(char s[], int lim);
char* entab(char s[], int size);

/* replace string of blanks by the minimum number of tabs 
 * and blanks to achieve the same spacing */
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
        printf("%s", entab(line, len));
}
               
char* entab(char s[], int size)
{
    
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
