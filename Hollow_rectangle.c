#include<stdio.h>
//Hollow Rectangle 
int main()
{
    int line,wt,i,j;
    printf("Enter lines = ");
    scanf("%d",&line);
    printf("Enter width = ");
    scanf("%d",&wt);
    for(i=1 ; i<=line ; i++)
    {
    for(j=1 ; j<=wt ; j++)
    if((i==1 || i==line) || (j==1 || j==wt))
    printf("*");
    else 
    printf(" ");
    printf("\n");
    }
    return 0;
}