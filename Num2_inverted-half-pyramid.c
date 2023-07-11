/*inverted and rotated half-peramid with number */

#include<stdio.h>

int main()
{
   int i,j,r,n;
   printf("enter number of row::");
   scanf("%d",&r);
   n=r;
   for(i=1; i<=n; i++)
   {
     for(j=1; j<=r; j++)
     { 
       printf("%d",j);
       
     }
     printf("\n");
     r=r-1;
   } return 0;
}