#include <stdio.h>
#include <conio.h>

void currentArray(int arr[])
{
   for (int i = 0; i < 7; i++)
   {
      printf("%d ", arr[i]);
   }
}
int main()
{
   int i, size = 7, num;
   int arr[7] = {1, 14, 456, 37, 2, 22, 33};

   printf("Current Array:\n");
   currentArray(arr);

   printf("\n \n Search Number:");
   scanf("%d", &num);

   for (i = 0; i < size; i++)
   {
      if (arr[i] == num)
      {
         printf("\n\nThe index of %d is %d", num, i);
      }
      else{
         printf("Invalid Number");
      }
   }
   return 0;
}