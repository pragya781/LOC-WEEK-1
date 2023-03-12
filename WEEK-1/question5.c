#include<stdio.h>
#include<math.h>
void main()
{
    float R;
    printf("Enter the radius of the circle:");
    scanf("%d", &R);
    printf("Diameter of the circle is:%d\n", 2*R);
    printf("circumference of the circle is:%d\n", 2*3.14*R);
    printf("Area of the circle is:%d",3.14*pow(R,2));
}