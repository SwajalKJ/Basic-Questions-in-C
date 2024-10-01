//         1
//       2 2 2
//     3 3 3 3 3
//   4 4 4 4 4 4 4
// 5 5 5 5 5 5 5 5 5

#include <stdio.h>

int main() {
int row, col, iter;
for(row = 1; row <= 5; row++) 
{
   for(col = 1; col <= 5 - row; col++)
   {
       printf(" ");
   }
   for(iter = 1; iter <= 2 * row - 1; iter++) {
       printf("%d", row);
   }
   printf("\n");
}
return 0;
}
