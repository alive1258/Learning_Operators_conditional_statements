// #include <stdio.h>
// int main() {
//     int num;
//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     if (num % 2 == 0) {
//         printf("%d is an even number.\n", num);
//     } else {
//         printf("%d is an odd number.\n", num);
//     }

//     return 0;
// }


#include <stdio.h>
int main() {
    int N;

    scanf("%d", &N);

    if (N % 3 == 0) {
        printf("%d YES\n", N);
    } else {
        printf("%d NO\n", N);
    }

    return 0;
}