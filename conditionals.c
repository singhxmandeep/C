// #include <stdio.h>

// int main() {
//     int age = 15;
//     if(age>10){
//         printf("Your age is greater than 10 \n");
//     }
//     if(age%5==0){
//         printf("Your age is divisible by 5 \n");
//     }else{
//         printf("Hello");
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     if(1){
//         printf("This is a non zero\n");
//     }
//     if(0){
//         printf("I am zero I am zero\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a=0, b=0;
//     printf("The value of a and b is %d\n", a&&b);
//     printf("The value of a or b is %d\n", a||b);
//     return 0;
// }

// Else-if

// #include <stdio.h>

// int main() {
//     int age = 6  5;
//     if(age>60){
//         printf("You can rive and your age is greater that 60");
//     }
//     else if(age>18){
//         printf("You can drive");
//     }
//     else{
//         printf("You cant drive");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     // terneray operator
//     int a  = 2;
//     int b = 4;
//     a>b?printf("%d is greater that %d",a,b):printf("% d is smaller than %d", a, b);
//     return 0;
// }

#include <stdio.h>

int main() {
    char Marks;
    printf("enter Marks");
    scanf("%c", &Marks);

    switch (Marks)
    {
    case 'A':
        printf("You Scored above 90");
        break;
    case 'B':
        printf("You Scored above 80");
        break;
    case 'C':
        printf("You Scored above 70");
        break;
    case 'D':
        printf("You Scored above 60");
        break;
    
    default:
    printf("You are Fail");
        break;
    }
    return 0;
}