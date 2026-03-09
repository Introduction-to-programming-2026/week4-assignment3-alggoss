/*
WEEK 1 — TASK 4 (Linear Search - Strings)

Goal:
Practice string comparison.

Task:
1. Create an array of strings (names).
2. Ask the user for a name.
3. Search the array.
4. Use strcmp() to compare strings.
5. Print:
Found
or
Not found

Rules:
- You must use strcmp().
- Do NOT use == for string comparison.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char names[][20] = {"Muhammet", "Cagri", "Ozatli", "Lorik", "Limani"};
    char target[20];
    int found = 0;

    printf("Enter a name: ");
    scanf("%s", target);

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(names[i], target) == 0)
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