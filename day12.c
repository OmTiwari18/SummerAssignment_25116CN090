                                        // QUESTION NO 45


// #include<stdio.h>
// int main(void)
// {
//     int num, tmp, rev = 0, rem;
//     printf("Enter a number = ");
//     scanf("%d", &num);
//     tmp = num;
//     while(tmp != 0)
//     {
//         rem = tmp % 10;  // get the last digit from tmp
//         rev = rev * 10 + rem;
//         tmp /= 10;  // remove the last digit from tmp
//     }
//     if(num == rev)
//     {
//         printf("%d is a palindrome number\n", num);
//     }
//     else
//     {
//         printf("%d is not palindrome number\n", num);
//     }
//     return 0;
// }



                                        //QUESTION NO 46


// #include <math.h>
// #include <stdio.h>

// int checkPrimeNumber(int n);
// int checkArmstrongNumber(int n);

// int main() {
//    int n, flag;
//    printf("Enter a positive integer: ");
//    scanf("%d", &n);

//    // check prime number
//    flag = checkPrimeNumber(n);
//    if (flag == 1)
//       printf("%d is a prime number.\n", n);
//    else
//       printf("%d is not a prime number.\n", n);

//    // check Armstrong number
//    flag = checkArmstrongNumber(n);
//    if (flag == 1)
//       printf("%d is an Armstrong number.", n);
//    else
//       printf("%d is not an Armstrong number.", n);
//    return 0;
// }

// // function to check prime number
// int checkPrimeNumber(int n) {
//    int i, flag = 1, squareRoot;

//    // computing the square root
//    squareRoot = sqrt(n);
//    for (i = 2; i <= squareRoot; ++i) {
//       // condition for non-prime number
//       if (n % i == 0) {
//          flag = 0;
//          break;
//       }
//    }
//    return flag;
// }

// // function to check Armstrong number
// int checkArmstrongNumber(int num) {
//    int originalNum, remainder, n = 0, flag;
//    double result = 0.0;

//    // store the number of digits of num in n
//    for (originalNum = num; originalNum != 0; ++n) {
//       originalNum /= 10;
//    }

//    for (originalNum = num; originalNum != 0; originalNum /= 10) {
//       remainder = originalNum % 10;

//       // store the sum of the power of individual digits in result
//       result += pow(remainder, n);
//    }

//    // condition for Armstrong number
//    if (round(result) == num)
//       flag = 1;
//    else
//       flag = 0;
//    return flag;
// }



                                        //QUESTION NO 47




// #include <stdio.h>

// void printFibonacci(int count) {
//     if (count < 1) {
//         printf("Invalid number of terms\n");
//         return;
//     }

//     // Initialize first two terms
//     float value1 = 2.3f;
//     float value2 = 3.0f;

//     // For loop to print Fibonacci series
//     for (int i = 1; i <= count; i++) {
//         if (i <= 2) {
//             // Print the first two terms
//             printf("%.2f ", (i == 1) ? value1 : value2);
//         } else {
//             // Calculate and print the next term
//             float num = value1 + valuet2;
//             printf("%.2f ", num);
//             value1 = value2;
//            value2 = num;
//         }
//     }
// }

// int main() {
//     int number = 9;
//     printFibonacci(number);

//     return 0;
// }



                                        //QUESTION no 48


#include <stdio.h>

// Function to check if number is perfect
int isPerfectNumber(int n) {
    int sum = 0;

    // Find sum of divisors
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Return 1 (true) if perfect, else 0
    return sum == n;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Call function and display result
    if (isPerfectNumber(n)) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }

    return 0;
}