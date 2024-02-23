#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("\nEnter a: ");
    scanf("%d", &a);

    printf("\nEnter b: ");
    scanf("%d", &b);

    printf("\nEnter b: ");
    scanf("%d", &b);
    fflush(stdin);

    if(a + b > c && b + c > a && a + c > b){
        if(a == b || a == c || b == c){
            if(a == b && b == c){
                printf("\nTam giac deu");
            }else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a ){
                printf("\nTam giac vuong can");
            }else{
                printf("\nTam giac can");
            }
        }else{
            printf("\nTam giac thuong");
        }
    }else{
        printf("\nKhong phai tam giac");
    }

    return 0;
}
