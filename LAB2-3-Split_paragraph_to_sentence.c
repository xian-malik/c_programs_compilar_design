#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100], *token;
    puts("Enter a sentence:- ");
    gets(sentence);

    printf("\n");
    token = strtok(sentence, ".");
    while( token != '\0' )
    {
        puts(token);
        token = strtok('\0', ".");
    }
    return 0;
}
