#include<stdio.h>
#include<conio.h>
int left_rotation(int*,int,int);
int main()
{
    int n,d;
    printf("Enter array size and element- ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("rotation - ");
    scanf("%d",&d);
    left_rotation(arr,d,n);
    return(0);
}
int left_rotation(int *arr,int d,int n)
{
    int t=n;
    int temp;
    for(int j=0;j<d;j++)
    {
        temp=arr[0];
        for(int i=0;i<n;i++)
          arr[i]=arr[i+1];

          arr[n-1]=temp;
    }
    printf("Array after left rotation\n");
    for(int i=0;i<t;i++)
       printf("%d ",arr[i]);
       return(0);
}
