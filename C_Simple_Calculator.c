#include <stdio.h>
 int main(){
   long long X, Y;
    scanf("%lld %lld", &X, &Y);
    long long sum = X + Y;
    long long mul = X * Y;
    long long dif = X - Y;
    printf("%lld + %lld = %lld\n", X, Y, sum);
    printf("%lld * %lld = %lld\n", X, Y, mul);
    printf("%lld - %lld = %lld\n", X, Y, dif);
   return 0;
}