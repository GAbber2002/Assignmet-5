#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter the number of times to print iNeuron: ");
    scanf("%d", &n);

    printf("Printing iNeuron %d times:\n", n);
    for (i = 1; i <= n; i++)
        {
        printf("iNeuron\n");
        }

    return 0;
}
