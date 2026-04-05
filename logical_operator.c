#include <stdio.h>

int main(){
    // logical operators
    int a =5;
    int b=2;
    if(a>0 && b>0){
        printf("both %d and %d are positive\n",a,b);
    }
    if(a>0 || b>0){
        printf("at least one of %d and %d is positive\n",a,b);
    }
    if(!(a==b)){
        printf("%d is not equal to %d\n",a,b);
    }
    return 0;
}