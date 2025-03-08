/* Prime Number Check

 Yeh program check karta hai ki koi diya gaya number prime hai ya nahi.
 Prime number wo hota hai jo sirf 1 aur apne aap se divisible hota hai.
 Example: 2, 3, 5, 7, 11, etc. Prime numbers hote hain.

 Things you should know about Prime Numbers:
 1. Prime numbers ko 1 aur apne aap ke alawa kisi aur number se divide nahi kiya ja sakta.
 2. Number 1 ko prime nahi mana jata.
 3. Is program mein hum number ko 2 se lekar us number ke half tak check karenge. Agar kisi number se divisible ho gaya,
    to wo number prime nahi hai. */

#include <stdio.h>
#include <conio.h>

void main()
{
   clrscr(); // Clears the screen (yeh function har compiler mein kaam nahi karta)

   int i, num, isPrime = 1; // 'isPrime' ko initial value 1 denge, matlab assume karte hain ki number prime hai

   printf("Enter Number: ");
   scanf("%d", &num);

   if (num < 2) // Numbers less than 2 are not prime
   {
      printf("%d is not a prime number or invalid number.\n", num);
      return; // Exit the program as no number less than 2 can be prime
   }

   // Loop from 2 to num/2 to check for factors
   for (i = 2; i <= num / 2; i++)
   {
      if (num % i == 0) // If num is divisible by i, then it's not prime
      {
         isPrime = 0; // Mark the number as non-prime
         break;       // Exit the loop as we've found a divisor
      }
   }

   if (isPrime) // If no divisor was found, the number is prime
   {
      printf("%d is a prime number :)\n", num);
   }
   else // If a divisor was found, the number is not prime
   {
      printf("%d is not a prime number :(\n", num);
   }

   getch(); // Wait for user input before closing the program
}
