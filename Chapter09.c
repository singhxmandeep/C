// // #include <stdio.h>
// // #include <string.h>

// // struct employee
// // {
// //     int code;
// //     float salary;
// //     char name[10];
// // };

// // int main()
// // {

// //     struct employee e1, e2, e3;
// //     printf("Enter the value of code\n");
// //     scanf("%d", &e1.code);

// //     printf("Enter the salary\n");
// //     scanf("%f", &e1.salary);

// //     printf("Enter the Name\n");
// //     scanf("%s", &e1.name);

// //     printf(
// //         "%d %f %s\n", e1.code, e1.salary, e1.name);

// //     printf("Enter the value of code\n");
// //     scanf("%d", &e2.code);

// //     printf("Enter the salary\n");
// //     scanf("%f", &e2.salary);

// //     printf("Enter the Name\n");
// //     scanf("%s", &e2.name);

// //     printf(
// //         "%d %f %s\n", e2.code, e2.salary, e2.name);

// //     printf("Enter the value of code\n");
// //     scanf("%d", &e3.code);

// //     printf("Enter the salary\n");
// //     scanf("%f", &e3.salary);

// //     printf("Enter the Name\n");
// //     scanf("%s", &e3.name);

// //     printf(
// //         "%d %f %s\n", e3.code, e3.salary, e3.name);

// //     return 0;
// // }

// // // #include <stdio.h>
// // // #include <string.h>

// // // struct employee{
// // //     int code;
// // //     float salary;
// // //     char name[10];
// // // };

// // // int main() {

// // //     struct employee e1, e2;
// // //     strcpy(e1.name, "Mandeep");
// // //     e1.salary = 55.43;
// // //     e1.code  = 123;
// // //     printf(
// // //         "%d %f %s", e1.code, e1.salary, e1.name
// // //     );

// // //     return 0;
// // // }

// #include <stdio.h>
// struct employee
// {
//     int code;
//     float salary;
//     char name[10];
// };

// int main()
// {
//     struct employee e1;
//     e1.code = 34;
//     struct employee *ptr;
//     ptr = &e1;

//     // printf(("%d"), (*ptr).code);
//     printf(("%d"), ptr-> code);
//     return 0;
//

#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} Emp;


int main()
{
    Emp e1;
    Emp * ptr = &e1;
    e1.code = 43;
    strcpy(e1.name, "Mandeep");
    e1.salary = 23.2;
    printf("%d %s %f \n", e1.code, e1.name, e1.salary);
    printf("%d %s %f \n", (*ptr).code, (*ptr).name, (*ptr).salary);
    printf("%d %s %f \n", ptr->code, ptr->name, ptr->salary);

    return 0;
}