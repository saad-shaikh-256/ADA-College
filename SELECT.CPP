// Selection Sort
#include <stdio.h>
#include <conio.h>

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
}
void main()
{

   clrscr();

   int arr[] = {2, 56, 23, 4, 1};
   int i, index = 0, min_val, j;

   printf("Original Array : ");
   printArray(arr, 5);
   printf("\n");

   for (i = 0; i < 4; i++)
   {
      index = i;
      min_val = arr[i];
      for (j = i + 1; j < 5; j++)
      {
         if (min_val > arr[j])
         {
            index = j;
            min_val = arr[j];
         }
      }
      arr[index] = arr[i];
      arr[i] = min_val;
      printf("Iteration %d : ", i + 1);
      printArray(arr, 5);
   }
   printf("\n");
   printf("Sorted Array : ");
   printArray(arr, 5);

   getch();
}