/* Selection Sort Algorithm

 Selection Sort ek simple sorting algorithm hai jisme hum array ke elements ko
 step-by-step sort karte hain. Har step pe hum smallest (ya largest) element ko
 select karte hain aur usse array ke starting position pe place karte hain.

 Things you should know about Selection Sort:
 1. Selection sort kaam karta hai array ke har element ko compare karke smallest element
    ko find karne ke liye, aur usse apne correct position pe place karta hai.
 2. Isme har iteration me ek element ko apni final position pe rakh diya jata hai.
 3. Time complexity: **O(n^2)** hai, jisme n array ka size hai, to agar array ka size bada ho,
    to yeh algorithm slower ho sakta hai.
 4. Yeh algorithm simple hai, lekin badhi arrays ke liye efficient nahi hai, aur isse better algorithms
    jaise Merge Sort aur Quick Sort hote hain.*/

#include <stdio.h>
#include <conio.h>

// Function to print the current array
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   {
      printf("%d ", arr[i]);  // Print the element at index i
   }
   printf("\n");
}

void main()
{
   clrscr();  // Clears the screen (yeh function har compiler mein kaam nahi karta)

   // Array to be sorted
   int arr[] = {2, 56, 23, 4, 1};
   int i, index, min_val, j;

   // Printing the original array
   printf("Original Array : ");
   printArray(arr, 5);
   printf("\n");

   // Selection Sort Logic: Outer loop to move through the array
   for (i = 0; i < 4; i++)  // Loop from 0 to size-2
   {
      index = i;  // Assume the current index is the smallest
      min_val = arr[i];  // Store the current element as the minimum
      for (j = i + 1; j < 5; j++)  // Inner loop to find the smallest element in the remaining unsorted part
      {
         if (min_val > arr[j])  // If a smaller element is found
         {
            index = j;  // Update the index of the smallest element
            min_val = arr[j];  // Update the minimum value
         }
      }
      // Swap the smallest element found with the element at the current index
      arr[index] = arr[i];
      arr[i] = min_val;

      // Print the array after each iteration
      printf("Iteration %d : ", i + 1);
      printArray(arr, 5);
   }
   printf("\n");

   // Printing the sorted array
   printf("Sorted Array : ");
   printArray(arr, 5);

   getch();  // Wait for user input before closing the program
}
