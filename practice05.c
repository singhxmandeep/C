// #include <stdio.h>

// float avg(float, float, float);

// float avg(float x, float y, float z){
//     float avge = (x+y+z)/3;
//     return avge;
// }

// int main() {
//     float c = avg(22,3,4);
//     printf("The average of three numbers is %.2f", c);
//     return 0;
// }

// Celcius to farenheit
// #include <stdio.h>

// float convrt(float);

// float convrt(float cel){
//     float fh = 9.0/5.0*cel + 32;
//     return fh;
// }

// int main() {
//     float Farenhiet = convrt(100);
//     printf("%f", Farenhiet);
//     return 0;
// }

// #include <stdio.h>
// float g = 9.8;
// float force(float mass){
//     float f = mass * g;
//     return f;
// }

// int main() {
//     float forc = force(2);
//     printf("%f", forc);
//     return 0;
// }

// #include <stdio.h>

//     // 0+1  1
//     // 1+2  3
//     // 2+3  5
//     // 3+5  8
//     // 4+8  12

// int main() {

//     return 0;
// }

#include <stdio.h>

#include <stdio.h>

int main() {
    int n, i = 1, j, stars;
    printf("Enter the number of lines you want: ");
    scanf("%d", &n);
    
    stars = 1;  // Initial number of stars to print
    
    for (i = 1; i <= n; i++) {
        for (j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");  // Newline after stars
        printf("\n");  // Additional newline for blank line
        stars += 2;  // Increase the number of stars by 2 for the next line
    }
    
    return 0;
}

