//WAP A PROGRAMME ENTER TEMP IN CELSIUS AND CONVERT INTO FAHRENHEIT
#include<stdio.h>
void main()
{
    float cel,far;
    printf("Enter the temprature in celcius :\n");
    scanf("%f", &cel);

    far = (cel*1.8)+32;
    printf("celcius = %f and fahrenheit = %f", cel,far);
}
