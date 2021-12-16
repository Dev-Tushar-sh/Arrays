#include<stdio.h>
#include<conio.h>
int main()
{
    int n,k;
    printf("Number of element in an array- ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Entr %dth element",i);
        scanf("%d",&arr[i]);
    }
    printf("elements are - \n");
    for(int i=0;i<n;i++)
    printf("    %d\n",arr[i]);
    printf("Largest number is - ");
    k=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>k)
        {
            k=arr[i];
        }

    }
   printf("%d",k);
}
