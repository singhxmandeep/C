// #include <stdio.h>

// int main() {
//     int a = 6;
//     int* int_adr = &a;
//     int** adr_adr = &int_adr;

//     printf("The address of a is %d\n", int_adr);
//     printf("The address of a is %d\n", *int_adr);
//     printf("The address of a is %d\n", **(adr_adr));
//     return 0;
// }

// #include <stdio.h>


// int value(int* x){
//     int* int_adress = x;
//     printf("The address in the function is %d", int_adress);
//     return 0;
// }

// int main() {
//     int i = 5;
//     int* int_adr = &i;
//     printf("The address of i is %d\n", int_adr);
//     printf("------------------\n");
//     value(&i);
    

//     return 0;
// }

// #include <stdio.h>]
//     tentimes(int* z){
//         *z *=  10;
//         return 0;
//     }

// int main() {
//     int x = 5;
//     int* int_adr = &x;
//     printf("The adress of x is %d\n", int_adr);
//     printf("The value of x is %d\n", x);
//     tentimes(int_adr);
//     printf("The value of x is now ten times %d\n", x);
//     return 0;
// }

// #include <stdio.h>

//     int sum(int* a, int* b){
//         *a = 3;
//         *b = 10;
//         return *a + *b;
//     }

// int main() {
//     int x, y;
//     x = 2, y = 4;
//     printf("The sum of %d and %d is %d",x,y,sum(&x,&y));
//     return 0;
// }

// #include <stdio.h>
//     int average(int* c, int* d){
//         return (*c+*d)/2;
//     }

//     int sum(int* a, int* b){
//         *a = 4;
//         *b = 10;
//         return *a + *b;
//     }

// int main() {
//     int x, y;
//     x = 2, y = 4;
//     printf("The sum of %d and %d is %d\n",x,y,sum(&x,&y));
//     printf("The average of %d and %d is %d\n",x,y,average(&x,&y));
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int i = 10;
//     int* int_adr = &i;
//     printf("The value of i usnt the pointer to pointer type of variable is: %d ", *int_adr);
//     return 0;
// }

#include <stdio.h>]
    tentimes(int z){
        z =  10;
        return 0;
    }

int main() {
    int x = 5;
    int* int_adr = &x;
    printf("The adress of x is %d\n", int_adr);
    printf("The value of x is %d\n", x);
    tentimes(x);
    printf("The value of x is now ten times %d\n", x);
    return 0;
}