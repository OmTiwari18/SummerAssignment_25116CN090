                             // QUESTION N0. 33

// #include<stdio.h>
// int main()
// {
//     int rows = 5;

//     // Outer loop to print all rows
//     for (int i = 0; i < rows; i++)
//     {

//         // Inner loop to print the * in each row
//         for (int j = 0; j < rows - i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


                                // QUESTION NO. 34


// int main()
// {
//     int rows = 5;

//     // Outer loop to print all rows
//     for (int i = 0; i < rows; i++)
//     {

//         // Inner loop to print the * in each row
//         for (int j = 0; j < rows - i; j++)
//         {
//              printf("%d " , j+1 );  //TO print no. in the Pattern
//         }
//         printf("\n");
//     }
// }


                                // QUESTION NO. 35



// #include <stdio.h>

// int main() {
//     int rows = 5;
//     char ch = 'A';

//     // Outer loop for rows
//     for (int i = 1; i <= rows; i++) {
//         // Inner loop prints the same character 'i' times
//         for (int j = 1; j <= i; j++) {
//             printf("%c ", ch);
//         }
//         // Move to the next alphabet letter
//         ch++;
//         // Print a newline at the end of each row
//         printf("\n");
//     }
//     return 0;
// }

                                // QUESTION NO. 36


#include <stdio.h>
int main()
{
    int rows, columns;
    printf("Enter the number of rows: \n");
    
    // taking input for number of rows
    scanf("%d", &rows);
    printf("Enter the number of columns: \n");
    
    // taking input for number of columns
    scanf("%d", &columns);
    
    // Outer loop to handle number of rows
    for (int i = 1; i <= rows; i++)
    {
        
        // Inner loop to handle number of columns
        for (int j = 1; j <= columns; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == columns)
            {
                // Printing stars
                printf("*");
            }
            else
            {
                // Printing spaces
                printf(" ");
            }
        }
        // Ending line after each row
        printf("\n");
    }
    return 0;
}

