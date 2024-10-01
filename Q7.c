//Write a C program to find out given character is vowel or not.

#include<stdio.h>
int main() {
char c;
printf("Enter a char: ");
scanf("%c", &c);

if(c=='o' || c=='O' || c=='a' || c=='A' || c=='I' || c=='i' || c=='e' || c=='E' || c=='U' || c=='u')
{
    printf("Char is a Vowel");
}
else
{
    printf("char is a consonent");
}
    return 0;
}
