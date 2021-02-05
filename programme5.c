//WAP IN C TO CHECK WHEATHER ALPHABET IS VOWEL OR CONSONANT USING SWITCH CASE
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any Alphabet : \n");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a':
        printf("Vowel");
        break;

        case 'e':
        printf("Vowel");
        break;

        case 'i':
        printf("Vowel");
        break;

        case '0':
        printf("Vowel");
        break;

        case 'u':
        printf("Vowel");
        break;

        case 'A':
        printf("Vowel");
        break;

        case 'E':
        printf("Vowel");
        break;

        case 'I':
        printf("Vowel");
        break;

        case 'O':
        printf("Vowel");
        break;

        case 'U':
        printf("Vowel");
        break;

        default:
        printf("Consonant");

        return 0;

    }
    

}