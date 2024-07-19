// #include <stdio.h>

// int main()
// {
//     int marks[5];
//     marks[0] = 29;
//     marks[1] = 36;
//     marks[2] = 57;
//     marks[3] = 98;
//     marks[4] = 34;

//     for(int i = 0; i<5; i++){
//         printf("The marks of student is %d\n", marks[i]);
//     }
//     return 0;
// }

// other ways  to initialize array
// #include <stdio.h>

// int main() {
//     int cgpa[] ={1,2,3,4};
//     for(int i = 0; i<4; i++){
//         printf("The value at index %d is %d\n", i, cgpa[i]);
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     // int a = 5;
//     // int* adr = &a;
//     // printf("The address of a is %u\n", adr);
//     // printf("The address of a is %u\n", &a);
//     // adr++;
//     // printf("The address of a is %u\n", adr);


//     char a = "A";
//     char* adr = &a;
//     printf("The address of a is %u\n", adr);
//     printf("The address of a is %u\n", &a);
//     adr++;
//     printf("The address of a is %u\n", adr);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int marks[] = {12,34,56,67};

//     // int* ptr = &marks[0];
//     int* ptr = marks; // same as int* ptr = &marks[0];

//     for (int i = 0; i < 4; i++)
//     {
//         // printf("The marks at index %d is %d\n", i, marks[i]);
//         printf("The marks at index %d is %d\n", i, *ptr);
//         ptr++;
// //     }

    

    
    
//     return 0;
// }

#include <stdio.h>

int main() {
    int arr[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value of arr[%d],arr[%d]\n", i, j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value of arr[%d],arr[%d] is %d\n", i, j, arr[i][j]);
        }
        
    }
    
    return 0;
}