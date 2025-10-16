#include <stdio.h>
int main (){
float a, b, c;
printf("Enter 1st number :");
scanf("%f",&a);
printf("Enter 2nd number: ");
scanf("%f",&b);
c=a/b;
printf("%.2f/%.2f = %.2f", a, b, c);
return 0;}
