// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if (n <= 1 || n % 2 == 0)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n, i, isPrime = 1;
    scanf("%d", &n);

    if (n <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}