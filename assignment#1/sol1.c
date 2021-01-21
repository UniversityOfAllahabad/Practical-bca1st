#include<stdio.h>
#include<conio.h>
void main() 
{
  float a;
  printf("Enter distance(Km): ");
  scanf("%f",&a);
  printf(" in meters: %.f\n",a*1000);
  printf(" in feet: %.3f\n",a*3280.84);
  printf(" in meters: %.3f\n",a*39370.079);
  printf(" in meters: %.f\n",a*100000);
  
} 

