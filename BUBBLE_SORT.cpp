// Bubble Sort
#include <stdio.h>
#include <conio.h>

void printarray(int arr[])
{
   for (int i = 0; i < 5; i++)
   {
      printf("%d ", arr[i]);
   }
}
void sortedArray(int arr[])
{
   for (int i = 0; i < 5; i++)
   {
      printf("%d ", arr[i]);
   }
}
int main()
{

   int arr[5], i, j, temp, size = 5;
   printf("Enter Array Value\n");
   for (i = 0; i < size; i++)
   {
      scanf("%d", &arr[i]);
   }

   printf("Original Array:\n");
   printarray(arr);

   for (i = 0; i < size - 1; i++)
   {
      for (j = i + 1; j < size; j++)
      {
         if (arr[i] > arr[j])
         {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }

   printf("\n Sorted  Array:\n");
   sortedArray(arr);

   return 0;
}
