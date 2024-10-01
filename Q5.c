//Write a C program for reversing 3 digits no.

#include<stdio.h>
int main()
{
int a, b = 0, r;
printf("Enter an integer: ");
scanf("%d", &a);
while(a != 0) {
	r = a % 10;
        b = b * 10 + r;
        a /= 10;
    }
    printf("Reversed Number = %d", b);
    return 0;
}
