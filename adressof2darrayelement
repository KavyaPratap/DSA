#include <stdio.h>

int main() {
   int i, j, base, n, m, ch, loc, r, c;
   printf("Enter no. of rows: ");
   scanf("%d", &i);
   printf("Enter no. of columns: ");
   scanf("%d", &j);
   int arr[i][j];

   printf("Enter Base Address: ");
   scanf("%d", &base);
   printf("1. Row major\n2. Column major\nEnter 1 or 2: ");
   scanf("%d", &ch);

   // Row major
   if (ch == 1) {
       printf("Enter row major matrix elements:\n");
       for (n = 0; n < i; n++) {
           for (m = 0; m < j; m++) {
               scanf("%d", &arr[n][m]);
           }
       }

       printf("Enter element to find its location:\n");
       printf("row= ");
       scanf("%d", &r);
       printf("column= ");
       scanf("%d", &c);
       
       // Row major order formula for location calculation
       loc = base + (r * j + c) * sizeof(int); 
       printf("Location of element arr[%d][%d] is %d\n", r, c, loc);
   }
   // Column major
   else if (ch == 2) {
       printf("Enter column major matrix elements:\n");
       for (n = 0; n < i; n++) {
           for (m = 0; m < j; m++) {
               scanf("%d", &arr[m][n]);
           }
       }

       printf("Enter element to find its location:\n");
       printf("row= ");
       scanf("%d", &r);
       printf("column= ");
       scanf("%d", &c);

       // Column major order formula for location calculation
       loc = base + (c * i + r) * sizeof(int); 
       printf("Location of element arr[%d][%d] is %d\n", r, c, loc);
   }
   return 0;
}
