/*
WEEK 1 — TASK 2 (Recursion)

Goal:
Practice recursion.

Task:
1. Ask the user for a positive integer n.
2. Use a recursive function to print:

#
##
###
####

Rules:
- You must create a recursive function.
- You cannot use a loop to print rows.
- Base case must be correct.
*/

#include <stdio.h>

void printRow(int n)
{
    if (n == 0)
        return;

    printRow(n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}

int main(void)
{
    int n;

    do
    {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    }
    while (n < 1);

    printRow(n);

    return 0;
}