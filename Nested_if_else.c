// #include <stdio.h>
// int main()
// {
//     int tk;
//     scanf("%d",&tk);

//     if(tk >= 5000){
//         printf("cox jabo\n");
//         if(tk >=10000)
//         {
//             printf("sundobon jabo\n");
//         }
//         else
//         {
//             printf( "ferot solay  na\n");
//         }
//     }
//     else{
//         printf("kotaw jabo na\n");
//     }
//     return 0;
// }




#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);

    if(N > 1000){
        printf("I will buy Punjabi\n");
        int tk=N-1000;
        if(tk >=500)
        {
            printf("I will buy new shoes\n");
            printf( "Alisa will buy new shoes\n");
        }
       
    }
    else{
        printf("Bad luck!\n");
    }
    return 0;
}