#include <stdio.h>
#include <string.h>

int main()
{
    char sen[20];
    int i;
    puts("Enter a sentence:- ");
    gets(sen);
    putchar('\n');
    for( i=0; sen[i]!='\0'; i++ )
    {
        if(sen[i] != ' ')
        {
            putchar(sen[i]);
        } else {
            putchar('\n');
        }
    }
    putchar('\n');
    return 0;
}
