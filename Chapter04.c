// #include <stdio.h>

// int main() {
//     // Print happy birthday 1 lakh times
//     return 0;
// }

// // While loop
// #include <stdio.h>

// int main()
// {
//     int i = 0;
//     while (i < 11)
//     {
//         printf(" %d ", i+10);
//         printf("Happy birthday %d\n",i);
//         // i = i + 1;
//         i++;
//     }
//     return 0;
// }

// Increment operator
// #include <stdio.h>

// int main() {
//     int i =5;
//     printf("The value of i is %d\n", i);
    
//     i = i+5;
//     printf("The value of i is %d\n", i);
//     i+  +;
//     printf("%d", i);

//     return 0;
// }

// Do white loop
// #include <stdio.h>

// int main() {
//     int i = 1 ;
//     do{
//         printf("The value of i is %d\n", i);
//         i++;
//     } while (i<11);
    
//     return 0;
// }

// For loop
// #include <stdio.h>

// int main() {
//     int n, i;
//     printf("Enter till");
//     scanf("%d", &n);
//     printf("Enter from");
//     scanf("%d", &i);
//     for ( i; i >= n; i--)
//     {
//         printf("Happy birthday %d\n", i);
//     }
    
//     return 0;
// }

// break and continue statement
#include <stdio.h>

int main() {
    for(int i = 0; i <= 15; i++){
        if(i==4){
            // break;
            continue;
        }
        printf("is is %d\n", i);
    }
    return 0;
}