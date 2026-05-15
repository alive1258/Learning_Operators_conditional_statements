#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++)
    {
        int X, Y;
        scanf("%d %d", &X, &Y);

        int sum = 0;

        int start = X, end = Y;
        if (start > end)
        {
            int temp = start;
            start = end;
            end = temp;
        }

        for (int i = start + 1; i < end; i++)
        {
            if (i % 2 == 1)
            {
                sum += i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}