#include <stdio.h>
int main(){
    int marks ;
    printf("Enter your marks \n",marks);
    scanf("%d",&marks);

    if(marks>90){
        printf("%d you got A++ \n",marks);
    }


    else if(marks>80 && 80>70) {
        printf("%d you got A+\n",marks);
    }

    else if(marks>70){
        printf("%d you got B+\n",marks);
    }

    else if(marks>60){
        printf("%d you got B\n",marks);
    }
    else if(marks>50){
        printf("%d you got C\n",marks);
    }
    else if(marks>40){
        printf("%d you got D\n",marks);
    }
    else{
        printf("you are *Fail* in Exam\n ");
    }
    return 0;
}


// #include <stdio.h>
// int main(){
//     int age ;

//     printf("Enter age\n");
//     scanf("%d", &age);

//     if (age != 50){
//         printf("old man\n");
//     }
// //     return 0;
// }