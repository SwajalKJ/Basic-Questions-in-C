//Write a C program to find out biggest of three input numbers.

#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the value of a\n:");
scanf("%d",&a);
printf("enter the value of b\n:");
scanf("%d",&b);
printf("enter the value of c\n:");
scanf("%d",&c);

if (a>b)
{
	if(b>c)
	{printf("a is greatest");}
	else if (a>c)
	{printf("a is greatest");}
	else
	{printf("c is greatest");}	
}
else if (b>a)
{
	if (a>c)
	{printf("b is greatest");}
	else if (b>c)
	{printf("b is greatest");}
	else
        {printf("c is greatest");}

}
else if (c>a)
{
	printf("c is greatest");
}
else
{
printf("all are equal");
}
return 0;
}
