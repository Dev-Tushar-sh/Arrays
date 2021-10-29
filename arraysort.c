#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[4],temp;
    printf("Enter the number in array");
    for(int i=0;i<=3;i++)
    scanf("%d",&arr[i]);
     printf("array before sort");
    for(int i=0;i<=3;i++)
        printf("%d ",arr[i]);
    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=3;j++)
        {
            if(arr[i]<arr[j])
          { temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
          }
        }
    }
     printf("array after sort");
    for(int i=0;i<=3;i++)
        printf("%d ",arr[i]);
    getch();
}
