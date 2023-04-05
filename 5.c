
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
        {
        printf("%d ", 2*i-1);
        }

    return 0;
}
