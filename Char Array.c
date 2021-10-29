#include<stdio.h>
void main()
{
    int i,j;
     char arr[5][20];
     printf("Enter the string");
     for(i=0;i<5;i++)
     {
      scanf("%s",&arr[i][0]);
     }
    for(i=0;i<5;i++)
    {
      printf("%s\n",arr[i]);
    }
}

