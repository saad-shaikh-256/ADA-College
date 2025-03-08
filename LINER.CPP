/* Linear Search Algorithm

 Linear search ek simple search algorithm hai jisme hum array ke har element ko ek-ek karke check karte hain
 jab tak hum us number ko na dhundh lein. Agar number mil jata hai, to hum uska index return karte hain. Agar number array mein nahi hota, to hum "Invalid Number" print karte hain.

 Things you should know about Linear Search:
 1. Yeh algorithm har element ko sequentially check karta hai.
 2. Time complexity: O(n), matlab agar array ka size n hai, to worst case mein humein array ke sare elements ko
    check karna padega.
 3. Yeh algorithm unsorted arrays ke liye bhi kaam karta hai, lekin yeh binary search se slow hota hai.
 4. Linear search kaafi simple hota hai, lekin large datasets mein inefficient ho sakta hai. */

#include <stdio.h>
#include <conio.h>

// Function to print the current array
void currentArray(int arr[])
{
   for (int i = 0; i < 7; i++) // Loop through the array to print each element
   {
      printf("%d ", arr[i]); // Print the element at index i
   }
}

int main()
{
   int i, size = 7, num;
   int arr[7] = {1, 14, 456, 37, 2, 22, 33}; // Array with some elements

   // Printing the current array
   printf("Current Array:\n");
   currentArray(arr); // Calling function to display the array

   // Asking the user to enter the number they want to search
   printf("\n \n Search Number: ");
   scanf("%d", &num); // User inputs the number to search in the array

   // Searching for the number in the array
   for (i = 0; i < size; i++) // Loop through the array to find the number
   {
      if (arr[i] == num) // If number is found at index i
      {
         printf("\n\nThe index of %d is %d\n", num, i); // Print the index of the number
         break;                                         // Exit the loop as we have found the number
      }
   }

   // If the number is not found
   if (i == size) // If i reaches the size of the array, it means number is not found
   {
      printf("Invalid Number: %d is not in the array.\n", num); // Print that the number is invalid
   }

   return 0; // End of the program
}
