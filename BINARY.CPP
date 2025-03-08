/*

Binary Search Algorithm

Yeh program Binary Search algorithm ka implementation dikhata hai C mein.
Binary Search ek efficient algorithm hai jo ek sorted array mein kisi specific element ko search karne ke liye use hota hai.
Yeh algorithm search interval ko bar-bar half mein divide karta hai.
Agar search key ka value middle item se chhota hai, toh search lower half mein hota hai.
Agar search key ka value middle item se bada hai, toh search upper half mein hota hai.

Binary Search ke baare mein jo cheezein aapko pata honi chahiye:
1. Array sorted hona chahiye tabhi Binary Search sahi se kaam karega.
2. Is algorithm ki time complexity O(log n) hoti hai, jo linear search (O(n)) se kaafi fast hai,
   especially jab array bada ho aur sorted ho.
3. Binary Search ko recursive ya iterative tarike se implement kiya jaa sakta hai.
   Is program mein iterative approach ka use kiya gaya hai.
4. Binary Search sirf **sorted arrays** ya lists pe kaam karta hai. Agar array unsorted hai, toh pehle usse sort karna padega.

Example:
Agar array diya gaya ho: {5, 10, 15, 25, 34, 41}, aur humein ek key (jaise ki 55) search karni ho,
toh Binary Search us key ko array mein find karne ki koshish karega. Agar key nahi milti, toh -1 return karega.

*/

#include <stdio.h>

int binarySearch(int arr[], int key, int size)
{
   int low = 0, high = size - 1, mid;

   // Jab tak low index high index se kam ya barabar hai, tab tak loop chalega
   while (low <= high)
   {
      mid = (low + high) / 2; // Mid element calculate karo
      if (key == arr[mid])    // Agar key mid element ke barabar hai
      {
         return mid; // Key mil gayi, mid index return karo
      }

      else if (key > arr[mid]) // Agar key mid element se badi hai
      {
         low = mid + 1; // Low ko mid ke next element par set karo
      }
      else // Agar key mid element se chhoti hai
      {
         high = mid - 1; // High ko mid ke pehle element par set karo
      }
   }
   return -1; // Agar key nahi milti, toh -1 return karo
}

int main()
{
   int key = 55, size = 6, mid;
   int arr[] = {5, 10, 15, 25, 34, 41};

   mid = binarySearch(arr, key, size); // Binary Search ko call karo
   if (mid == -1)                      // Agar key nahi mili
   {
      printf("Error: %d is out of Array\n", key); // Error message print karo
   }
   else // Agar key mil gayi
   {
      printf("%d Found at the %d index of array\n", key, mid); // Key ka index print karo
   }
   return 0; // Program ko successfully end karne ke liye 0 return karo
}
