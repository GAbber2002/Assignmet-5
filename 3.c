#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
        {
        printf("%d ", i);
        }

    return 0;
}

