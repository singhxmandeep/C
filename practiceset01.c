// Promblem 04 simple interest
#include <stdio.h>

int main() {
    float principle, rate, time, simpleInterest;
    printf("Enter the value of principle\n");
    scanf("%f", &principle);
    printf("Enter the value of rate\n");
    scanf("%f", &rate);
    printf("Enter the value of time\n");
    scanf("%f", &time);
    simpleInterest = (principle*rate*time)/100;
    printf("The simple interest of principle %f, rate %f, time %f is %f", principle, rate, time, simpleInterest);
    return 0;
}



// // Problem 03
// #include <stdio.h>

// int main() {
//     float c = 37,f;
//     f =(9.0/5)*c + 32;
//     printf("The value in f is %f\n", f);

//     return 0;
// }




// // problem 02 Calculate the area of circle
// #include <stdio.h>

// int main() {
//     float radius;
//     scanf("%f",&radius);
//     printf("Area of circle with radius %f is %f",radius, 3.14*radius*radius);
//     return 0;
// }




// problem 1: Calculate area of rectangle
// #include <stdio.h>
// int main()
// {
//     // int length = 20;
//     // int breath = 10;
//     int len;
//     int bre;
//     printf("Enter the value of length\n");
//     scanf("%d", &len);
//     printf("Enter the value of breath\n");
//     scanf("%d", &bre);
//     int area = len*bre;
//     // printf("Area of rectangle is %d", length * breath);
//     printf("Area of rectangle is %d", area);
//     return 0;
// }
