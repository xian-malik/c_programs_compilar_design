#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], aVow[10] = "", aCon[42] = "", *ch;
    int cVow = 0, cCon = 0, i, j, flag=0;
    puts("Enter a sentence:- ");
    gets(s);
    for(i=0; s[i]!='\0'; i++)
    {
        ch = s[i];
        if (ch != ' ')
        {
            if( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' )
            {
                flag = 0;
                cVow++;
                for(j=0; aVow[j]!='\0'; j++)
                    if(s[i]==aVow[j])
                        flag = 1;
                if(flag==0)
                    strcat(aVow, &ch);
            } else {
                flag = 0;
                cCon++;
                for(j=0; aCon[j]!='\0'; j++)
                    if(s[i]==aCon[j])
                        flag = 1;
                if(flag==0)
                    strcat(aCon, &ch);
            }
        }
    }
    printf("\nVowels: %s\n", aVow);
    printf("Number of Vowels: %d\n", cVow);
    printf("\nConsonants: %s\n", aCon);
    printf("Number of Consonants: %d\n", cCon);
    return 0;
}
