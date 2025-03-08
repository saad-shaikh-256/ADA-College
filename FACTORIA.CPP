/* Factorial Program

 Yeh program ek number ka factorial calculate karta hai.
 Factorial ka matlab hota hai ki kisi number ka product us number se lekar 1 tak ke sab numbers ka.
 Example: 5 ka factorial = 5 * 4 * 3 * 2 * 1 = 120.

 Yeh program ek loop ke through factorial nikaalta hai, aur answer ko print karta hai. */

#include <stdio.h>
#include <conio.h>

void main()
{
   clrscr(); // Clears the screen (yeh function har compiler mein kaam nahi karta, jaise GCC mein nahi hota)

   int i, num, ans = 1; // num ko input karenge, aur ans ko 1 se initialize karenge (kyunki multiplication mein 1 se shuru karte hain)

   // User se number input lena
   printf("Enter Number: \t"); // User ko prompt dikhana
   scanf("%d", &num);          // User ka input lena aur num mein store karna

   // Factorial nikaalne ke liye loop chalana
   for (i = 1; i <= num; i++) // Loop chalega 1 se lekar num tak
   {
      ans = ans * i; // Har step par ans ko i se multiply karenge
   }

   // Final answer print karna
   printf("The Factorial of %d is %d", num, ans); // Answer ko print karna

   getch(); // Program ko terminate hone se rokna, jab tak user input na de (yeh har compiler mein kaam nahi karta)
}
