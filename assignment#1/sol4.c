#include<conio.h>
#include<stdio.h>

void main(){
  float c, d;
  printf("Enter Your Numbers: ");
  scanf("%f %f",&c, &d);
  printf(" C:%.2f\n",c); 
  printf(" D:%.2f\n",d);
  
  float temp= c;
  c=d;
  d=temp;
  printf("       After Swap\n");
  printf(" C:%.2f\n",c);
  printf(" D:%.2f\n",d);
} 
