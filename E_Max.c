#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    int max = 0;
    for (int i = 1; i <= x; i++)
    {
        int val;
        scanf("%d", &val);
        if (val > max)
        {
            max = val;
        }
    }
    printf("%d\n", max);
    return 0;
}