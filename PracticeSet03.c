// Problem 02

// #include <stdio.h>

// int main()
// {
//     float marks1, marks2, marks3;
//     printf("Enter marks 1\n");
//     scanf("%f", &marks1);
//     printf("Enter marks 2\n");
//     scanf("%f", &marks2);
//     printf("Enter marks 3\n");
//     scanf("%f", &marks3);

//     float percentage = (marks1+marks2+marks3)/300*100;
//     if (percentage <= 33){
//             printf("You have failed");
//     }
//     else{
//         printf("You passed");
//     }

//     return 0;

// }

// Problem 03

// #include <stdio.h>

// int main()
// {
//     float income;
//     printf("Enter Income in Lacks");
//     scanf("%f", &income);

//     if (income > 2.5 && income < 5.0)
//     {
//         printf("Tax deducted for income %f is 5\n", income);
//     }
//     else if (income > 5.0 && income < 10.0)
//     {
//         printf("Tax deducted for income %f is 20\n", income);
//     }
//     else if (income > 10.0)
//     {
//         printf("Tax deducted for income %f is 30\n", income);
//     }

//     return 0;
// }

// problem 04
#include <stdio.h>

int main() {
    char ch = 'A';
    if(ch>=97 && ch<=122){
        printf("This character is lower case");
    }
    else{
        printf("This character is upper case");
    }
    return 0;
}