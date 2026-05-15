#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)

    {
        int x;
        scanf("%d", &x);
        long long factorial = 1;
        for (int j = 1; j <= x; j++)
        {
            factorial = factorial * j;
        }
        printf("%lld\n", factorial);
    }
    return 0;
}
