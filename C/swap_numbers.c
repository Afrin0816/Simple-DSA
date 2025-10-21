#include <stdio.h>

int main()
{
    int a, b, temp;

    // Ask user for input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Display values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping logic using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Display values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
