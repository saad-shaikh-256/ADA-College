// Binary Search

#include <stdio.h>

int binarySearch(int arr[], int key, int size)
{
   int low = 0, high = size - 1, mid;

   while (low <= high)
   {
      mid = (low + high) / 2;
      if (key == arr[mid])
      {
         return mid;
      }

      else if (key > arr[mid])
      {
         low = mid + 1;
      }
      else
      {
         high = mid - 1;
      }
   }
   return -1;
}

int main(){
   int key = 55, size = 6, mid;
   int arr[] = {5, 10, 15, 25, 34, 41};

   mid = binarySearch(arr, key, size);
   if (mid ==-1)
   {
      printf("Error: %d is out of Array",key);
   }
   else
   {
      printf("%d Found at the %d index of array", key,mid);
   }
   return 0;
}