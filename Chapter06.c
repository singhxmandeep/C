// #include <stdio.h>

// int main() {
//     int i = 7;
//     int*j = &i;
//     printf("The address of i is %p\n", &i);
//     printf("The address of i is %p\n", j);
//     printf("The value of adress j is %d\n", *j);
//     printf("The value of adress j is %d\n", *&i);

//     return 0;
// }

// #include <stdio.h>

//     int sum(int*, int*);

//     int sum(int* a, int* b){
//         *a =10;
//         return (*a+ *b);
//     }


// int main() {
    
//     int x =1, y =6;
//     printf("The sum of %d and %d is %d\n", x, y, sum(&x,&y));
//     printf("The value of x is %d", x);
//     return 0;
// }

#include <stdio.h>

void swap(int* a, int* b);

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x  = 4, y = 6;
    swap(&x, &y);
    printf("The value of a is %d and value of b is %d ", x, y);
    return 0;
}