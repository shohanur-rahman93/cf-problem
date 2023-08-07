#include <stdio.h>

int is_prime(int n)
{
    int i;
    if (n < 2)
    {
        return 0;
    }
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 0;
}
int main()
{
    int n;
    while (1)
    {
        printf("enter the number");
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        if (1 == is_prime(n))
        {
            printf("%d is a prime number .\n", n);
        }
        else
        {
            printf("5d is not prime number.|n");
        }
    }
    return 0;
}
