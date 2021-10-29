#include <stdio.h>
#include<conio.h>
void main()
{
   int array[5] = {2, 3, 4, 5};
   int N = 4, i=0 ,value;

   printf("Printing array before insertion \n");
   for(i = 0; i < N; i++)
   {
      printf("array[%d] = %d \n", i, array[i]);
   }
   for(i = N; i >= 0; i--)
   {
      array[i+1] = array[i];
   }
   printf("Enter value you want to insert \t");
   scanf("%d",&value);
   array[0] = value;
   N++;
   printf("Printing array after insertion \n");
   for(i = 0; i < N; i++)
    {
      printf("array[%d] = %d\n", i, array[i]);
    }
   getch();
}
