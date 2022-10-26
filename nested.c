#include <stdio.h>
int main(){
    int a;
    printf("Enter The Number\n");
    scanf("%d",&a);

    if(a>18){
        printf("You can Drive\n");
    }

    else{
        printf("You cannt drive\n");
    }
    return 0;
}