#include<stdio.h>
#include<conio.h>
void main() 
{
  float f;
  float c;
  printf("Enter Temperature(f): ");
  scanf("%f",&f);
  c=((f-32)*5)/9;
  printf("In Celsius: %.2f",c);
} 

