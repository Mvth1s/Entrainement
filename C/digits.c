#include <stdio.h>
#include <math.h>

int main()
{

    // This program counts the number of digits in a number
    int choice;
    printf("Choose a method to count digits:\n");
    printf("1. Using a loop\n");
    printf("2. Using log10\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        // Using a loop
        printf("Enter a number: ");
        int num;
        scanf("%d", &num);
        int count = 0;
        while (num)
        {
            count++;
            num /= 10;
        }
        printf("The number of digits is %d\n", count);
        return 0;
    }
    else if (choice == 2)
    {
        // Using log10
        printf("Enter a number: ");
        int n;
        scanf("%d", &n);
        int digits = log10(n) + 1;
        printf("The number of digits in %d is %d\n", n, digits);
        return 0;
    }
}