//Write a C program to swap two numbers without using third variable.

#include<stdio.h>
int main(){
int a,b,c;
printf("Enter value of a:\n");
scanf("%d",&a);
printf("Enter value of b:\n");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("value of a after swap is\n:");
printf("%d\n", a);
printf("value of b after swap is\n:");
printf("%d", b);
return 0;
}
