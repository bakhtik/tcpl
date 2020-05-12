#include <stdio.h>

/* lower: convert c tp lower case; ASCII only */
int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else 
        return c;
}

int isdigit_(int c)
{
    return c >= '0' && c <= '9';
}
    
int ishex(int c)
{
    c = lower(c);
    return isdigit_(c) ||
        (c >= 'a' && c <= 'f');
}

/* htoi: convert a string of hexadecimal digit into 
 * its equivalent integer value */
int htoi(char* s)
{
    int i, n;
    const int BASE = 16;

    n = i = 0;
    // skip optional prefix
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        i = 2;

    for (; ishex(s[i]); ++i)
        if (isdigit_(s[i]))
            n = BASE * n + (s[i] - '0');
        else
            n = BASE * n + 10 + (lower(s[i]) - 'a');

    return n;
}

int main()
{
    printf("F = %i\n", htoi("F"));
    printf("0xff = %i\n", htoi("0xff"));
    printf("0X12 = %i\n", htoi("0x12"));

    return 0;
}
