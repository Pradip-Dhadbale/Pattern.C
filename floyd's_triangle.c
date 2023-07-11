/* floyd's triangle
   1
   2  3
   4  5  6
   7  8  9  10
   11 12 13 14 15

*/

#include<stdio.h>

int main()
{
    int i,j,r,num=1;

    printf("enter limit::");
    scanf("%d",&r);

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d\t",num);
            num++;
        }
            printf("\n");
     }
    return 0;
}