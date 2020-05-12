#include <stdio.h>

int lower(int c)
{
    return ((c >= 'A') && (c <= 'Z')) ? c + 'a' - 'A' : c;
}

int main() 
{
    puts(lower('R'));
    puts(lower('f'));

    return 0;
}
