#include<stdio.h>
#include<conio.h>
void main ()
{
    int a[3][2];
    int i,j,n=0;
    printf("Enter the number for the array : ");
    for(i=0;i<3;i++)
    {
       for(j=0;j<2;j++)
       {
       scanf("%d",&a[i][j]);
       }
    }
        for(i=0;i<3;i++)
    {
       for(j=0;j<2;j++)
       {
        printf(" %d ",a[i][j]);
       }
      printf("\n");
    }

}
