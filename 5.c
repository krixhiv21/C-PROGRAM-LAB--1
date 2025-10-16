#include <stdio.h>
int main()
{
float a, b, Add, Subtract, Multiply, Divide;
printf(" Enter number of a:");
scanf("%f",&a);
printf("Enter number of b:");
scanf("%f",&b);
Add =a+b;
printf("%.2f + %.2f = %.2f\n", a, b, Add);
Subtract=a-b;
printf("%.2f %.2f = %.2f\n", a, b, Subtract);
Multiply = a* b;
printf("%.2f * %.2f = %.2f\n",a,b, Multiply);
Divide =a/b;
printf("%.2f / %.2f = %.2f\n",a,b, Divide);
return 0;}
