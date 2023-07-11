/*inverted and rotated half-peramid with number */

#include<stdio.h>

int main()
{
   int i,j,r,c;
   printf("enter number of row::");
   scanf("%d",&r);
   printf("enter number of column::");
   scanf("%d",&c);

   for(i=1; i<=r; i++)
   {
     for(j=1; j<=c; j++)
     { 
       printf("%d",j);
       
     }
     printf("\n");
     c=c-1;
   }
    return 0;
}