#include <stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);

    if(tk >= 5000){
        printf("cox jabo\n");
        if(tk >=10000)
        {
            printf("sundobon jabo\n");
        }
        else
        {
            printf( "ferot solay  na\n");
        }
    }
    else{
        printf("kotaw jabo na\n");
    }
    return 0;
}