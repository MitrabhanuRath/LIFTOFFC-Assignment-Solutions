// WAP IN C TO COUNT THE TOTAL NO OF WORDS IN A STRING
#include <stdio.h>
#include <string.h>
int main()
{
    int i, count=0;
    char str[100];
    printf("Enter the string for which you want to count the words\n");
    scanf("%[^\n]", str);

    for(i = 0; str[i]!='\0'; i++)
    {
        if(str[i] == ' ' && str[i+1] !=' ')
        count++;
    }
    printf("Number of words in the given strings :%d", count+1);
    
}