// WAP A PROGRAMME TO PERFORM ALL TYPES OF ARITHMATIC OPERATION USING 2 NUMBERS
#include <stdio.h>
int main()
{
    int p,q;
    int add, sub,multi, mod; 
    float div;

    printf("Enter any two numbers:\n");
    scanf("%d%d", &p,&q);

    add = p+q;
    sub = p-q;
    multi = p*q;
    div = (float)p/q;
    mod = p%q;       


    printf("the sum of two numbers is : %d\n", add);
    printf("difference of two numbers is : %d\n",sub);
    printf("Multiplication of two numbers is : %d\n",multi);
    printf("divison of two numbers is : %f\n",div);
    printf("module of two number is : %d\n",mod);
    return 0;
}