#include <stdio.h>

int main(){
    float a =5;
    int b=2;
    int sum =a+b;
    printf("sumation of %d and %d is %d\n",a,b,sum);
    int sub= a-b;
    printf("subtraction of %d and %d is %d\n",a,b,sub);

    int mul =a* b;
    printf("multiplication is %f\n",mul);
    float div = a / b;
    printf("division of %f and %d is %f\n",a,b,div);
    return 0;
}