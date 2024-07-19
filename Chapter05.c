// // #include <stdio.h>

// // // Function prototype
// // int sum(int,int);

// // // Function defination
// // int sum(int x, int y){
// //     printf("The sum is %d\n", x+y);
// //     return x+y;
// // }

// // int main() {
// //     int a1 = 22;
// //     int b1 = 23;
// //     sum(a1,b1);


    
// //     return 0;
// // }

// // Quiz
// // #include <stdio.h>


// // void good_morning(){
// //     printf("good morning\n");
// // }
// // void good_afternoon(){
// //     printf("good afternoon\n");
// // }
// // void good_evening(){
// //     printf("good evening\n");
// // }


// // int main() {
// //     good_morning();
// //     good_afternoon();
// //     good_evening();
// //     return 0;
// // }

// #include <stdio.h>

// // Function prototype
// int sum(int,int);

// // Function defination
// int sum(int x, int y){
//     return x+y;
// }

// int main() {
    
//     int c = sum(1,2);
//     printf("%d\n",c);


    
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int a = 5;
//     printf("The area of this square is %f", pow(a,2));
//     return 0;
// }


#include <stdio.h>

int factorial(int);

int factorial(int n){
         if(n==1||n==0){ 
            return 1;
         }
         return factorial(n-1)*n;
};

int main() {
    int a =5;
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}