/*inverted and rotated half-peramid */

#include<stdio.h>

int main()
{
    int i,j,k;
    int r=4,c=4; 

    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c-i; j++)
        {
           printf(" ");
        }
        
        for(int k=1; k<=i; k++)
          {
             printf("*");
          }
        printf("\n");
    }
    return 0;
}