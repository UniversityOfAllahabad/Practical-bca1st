#include<conio.h>
#include<stdio.h>

void main(){
   float l, b, r;
   printf("Enter Length, Breadth of rectangle and radius of circle: ");
   scanf("%f %f %f", &l, &b, &r); 
   
printf("Rectangle:-\n");
   printf("    area:%.2f \n",l*b);
   printf("    parameter:%.2f \n",2*(l+b));
   
printf("Circle:-\n");
   printf("    area:%.2f \n",3.14*r*r);
   printf("    circumference:%.2f \n",2*3.14*r);

} 
