#include <stdio.h>
int main(){


    int a , b;
    printf("Enter the first swap number ; \n");
    scanf("%d",&a);
    printf("Enter the second swap number ; \n");
    scanf("%d",&b);


    a = a + b;
    b = a - b;
    a = a - b;

    


    printf("The first value after swaping the number is %d\nThe second value after swaping the value is %d",a,b);
    

    return 0;

   
}

