/*
    Count_char
        hniman 
        Aug. 17, 2024
*/

#include <stdio.h>

int main()
{
    int c;
    int blanks = 0, digits = 0, letters = 0, others = 0;
    while((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++blanks;
        else if (c >= '0' && c<= '9')
            ++digits;
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            ++letters;
        else
            ++others;
    }
    printf ("blanks = %d, digits = %d, letters = %d, others = %d", blanks, digits, letters, others);
    return 0;
}