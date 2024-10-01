//Write a program to display grade of student based on marks. Use the following
scale -0 to 40:Fail, 40 to 50:Pass, 50 to 60:C, 60 To 70:B, 70 to 80:B+, 80 to 85:A,
85 to 90:A+, 90 to 95:O, >95:O+ (Use only if-else statements)

#include <stdio.h>

int main(){
float a;
printf("Enter Marks: ");
scanf("%f",&a);
	if(a>=40){
		if(40<=a && a<50){
		printf("Pass");
		}
		else if(50<=a && a<60)
		{
		printf("B");
		}
		else if(60<=a && a<70)
                {
                printf("B");
                }
		else if(70<=a && a<80)
                {
                printf("B+");
                }
		else if(80<=a && a<85)
                {
                printf("A");
                }
		else if(85<=a && a<90)
                {
                printf("A+");
                }
		else if(90<=a && a<95)
                {
                printf("O");
                }
		else if(95<=a)
		{
		printf("O+");
		}
	}
	else{
	printf("Fail");
	}

	return 0;
}
