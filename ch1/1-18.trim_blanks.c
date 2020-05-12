#include <stdio.h>

#define MAXLINE 1000

void process_lines(void);
int getline_(char s[], int lim);
int trim(char s[], int size);

/* remove trailing blanks and tabs from each line of input, 
 * and to delete entirely blank lines */
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
        if (trim(line, len) > 1)
            printf("%s", line);
}
               
// trim line and return result line lenght
int trim(char s[], int size)
{
   int i = size - 1;

   while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
       i--;
   
   s[++i] = '\n';
   s[++i] = '\0';
   
   return i;
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
