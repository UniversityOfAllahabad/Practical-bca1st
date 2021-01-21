#include<conio.h>
#include<stdio.h>

void main(){
  int sum, num, a, b, c, d, e;
  printf("Enter your numbers:") ;
  scanf("%d", &num);
  a =num /10000;
  b=(num/1000)%10;
  c=(num/100)%10;
  d=(num/10)%10;
  e=num%10;
  sum=a+b+c+d+e;
printf("%d", sum);
} 
