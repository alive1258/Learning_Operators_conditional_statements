#include <stdio.h>
 int main(){
    long long A, B,C ,D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    long long diff1 = (A * B) - (C * D);
    printf("Difference = %lld \n", diff1);
return 0;

} 