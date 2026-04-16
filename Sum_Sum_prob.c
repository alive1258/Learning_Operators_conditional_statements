#include <stdio.h>
int main()
{
    int N;
    int Positive_Sum = 0;
    int Negative_Sum = 0;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
        {
            Positive_Sum += arr[i];
        }
        else if (arr[i] < 0)
        {
            Negative_Sum += arr[i];
        }
    }
    printf("%d %d ", Positive_Sum, Negative_Sum);

    return 0;
}