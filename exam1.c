#include <stdio.h>

int main() {
    long long A;
    long long B;
    scanf("%lld %lld",&A,&B);
    long long mul = A * B;
    printf("%lld",mul);
    return 0;
}

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            printf("%d\n ", i);
        }
    }
    return 0;
}