//Write a C program to find out given year is leap year or not.

#include<stdio.h>
int main()
{
int year;

printf("Enter a Year:");
scanf("%d",&year);

if(year%4==0 && year%100==0 || year%400==0)
{
printf("year is a Leap year");
}
else
{
printf("not a leap year");
}
return 0;
}
