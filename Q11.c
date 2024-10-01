// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

#include<stdio.h>
int main()
{
int row,col;

for(row=0;row<5;row++)
{
  for (col=0;col<5;col++)
  {
    if(row>=col)
    {
     printf("%d",row+1);
    }
    else
    {
     printf(" ");
    }
  }  
  printf("\n");

}
return 0;
}
