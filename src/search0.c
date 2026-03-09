/*
WEEK 1 — TASK 3 (Linear Search - Integers)

Goal:
Practice arrays and linear search.

Task:
1. Create an array of integers.
2. Ask the user for a number.
3. Search the array manually (no library search).
4. If found print:
Found
   Otherwise print:
Not found

Rules:
- You must use a loop.
- Do NOT use any built-in search function.
*/

#include <stdio.h>

int main(void)
{
   int numbers[] = {13, 52, 71, 44, 99};
   int target;
   int found = 0;

   printf("Enter a number: ");
   scanf("%d", &target);

   for (int i = 0; i < 5; i++)
   {
      if (numbers[i] == target)
      {
         found = 1;
         break;
      }
   }

   if (found)
   {
      printf("Found\n");
   }
   else
   {
      printf("Not found\n");
   }

   return 0;
}