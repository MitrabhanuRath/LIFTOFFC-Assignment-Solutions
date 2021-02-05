//WAP A PROGRAMME TO ENTER RADIUS OF CIRCLE AND FIND ITS DIAMETER, CIRCUMFERENCE AND AREA
#include<stdio.h>
void main()
{
    float rad,dia,area,circumference;
    printf("Enter the radius of the circle:\n");
    scanf("%f", &rad);

    dia = 2*rad;
    area = 3.14*(rad*rad);
    circumference = 2*3.14*rad;

    printf("Diameter of the circle : %f\n",dia);
    printf("Area of the circle : %f\n",area);
    printf("Circumference of the circle : %f\n",circumference);

}