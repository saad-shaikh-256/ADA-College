// Factorial

#include <stdio.h>
#include <conio.h>

void main()
{
   clrscr();

   int i, num, ans = 1;

   printf("Enter Number: \t");
   scanf("%d", &num);

   for (i = 1; i <= num; i++)
   {
      ans = ans * i;
   }
   printf("The Factorial of %d is %d", num, ans);

   getch();
}