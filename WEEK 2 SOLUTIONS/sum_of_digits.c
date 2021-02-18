// WAP TO CALCULATE SUM OF DIGIT OF A NUMBER
#include <stdio.h>
int main()
{
    int num,  sum=0;
    printf("Enter the numbers to find the sum of the digits\n");
    scanf("%d", &num);

    while(num!=0)
    {
        sum+= num%10;
        num=num/10;
    }
    printf("Sum of the digits %d :", sum);
    return 0;
}