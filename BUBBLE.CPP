/* Bubble Sort Algorithm

 Yeh program Bubble Sort algorithm ko dikhata hai.
 Bubble Sort ek simple sorting algorithm hai jo elements ko compare karke unhe swap karta hai jab wo galat order mein hote hain. Is algorithm ka naam "Bubble Sort" isliye rakha gaya hai kyunki jo sabse bada element hota hai, wo har iteration ke baad array ke end mein "bubble" ho jata hai, jaise bubbles water ke surface pe aate hain.

 Things you should know about Bubble Sort:
 1. Yeh algorithm adjacent elements ko compare karta hai aur agar wo galat order mein hote hain toh unhe swap kar leta hai.
 2. Har pass ke baad largest element apne sahi position pe chala jata hai.
 3. Yeh process tab tak repeat hoti hai jab tak pura array sorted na ho jaye.
 4. Bubble Sort ka time complexity O(n^2) hota hai, isliye yeh bade arrays ke liye efficient nahi hota.
 5. Yeh algorithm simple hai, lekin large datasets ke liye itna fast nahi hota.

 Example:
 Agar array diya gaya ho: {5, 3, 8, 4, 2}, Bubble Sort is array ko sort karega, aur har iteration ke baad array ko thoda thoda sorted karega. */

#include <stdio.h>
#include <conio.h>

// Function to print the array
void printarray(int arr[])
{
   for (int i = 0; i < 5; i++) // Loop to print all elements in the array
   {
      printf("%d ", arr[i]);
   }
}

// Function to print the sorted array
void sortedArray(int arr[])
{
   for (int i = 0; i < 5; i++) // Loop to print all elements in the sorted array
   {
      printf("%d ", arr[i]);
   }
}

int main()
{
   clrscr();                         // Clears the screen (it might not work on some compilers like GCC)
   int arr[5], i, j, temp, size = 5; // Declare array and variables
   printf("Enter Array Value:\n");

   // User input for array elements
   for (i = 0; i < size; i++)
   {
      scanf("%d", &arr[i]); // Taking input for each element
   }

   // Printing the original array
   printf("Original Array:\n");
   printarray(arr); // Call print function to display the input array

   // Bubble Sort Algorithm
   // Bubble sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.
   // It "bubbles" larger elements to the end of the array after each pass.

   for (i = 0; i < size - 1; i++) // Outer loop for the number of passes
   {
      for (j = 0; j < size - i - 1; j++) // Inner loop for comparing adjacent elements
      {
         if (arr[j] > arr[j + 1]) // If current element is greater than the next one
         {
            // Swap the elements if they are in the wrong order
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
         }
      }

      // After each pass, print the array to show the sorting progress
      printf("\n\n After %d Iteration:\n", i + 1);
      sortedArray(arr); // Display array after the current iteration
   }

   // Print the final sorted array
   printf("\n \n Sorted Array:\n");
   sortedArray(arr); // Display the sorted array

   getch(); // Wait for user input before exiting

   return 0; // Return 0 to indicate successful execution
}
