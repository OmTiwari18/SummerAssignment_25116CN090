            //  QUESTION NO 17 (Perfect no)


#include <stdio.h>

int main()
{
    int i, num, sum = 0;

    /* Input a number from user */
    printf("Enter any number to check perfect number: ");
    scanf("%d", &num);

    /* Calculate sum of all proper divisors */
    for(i = 1; i <= num / 2; i++)
    {
        /* If i is a divisor of num */
        if(num%i == 0)
        {
            sum += i;
        }
    }

    /* Check whether the sum of proper divisors is equal to num */
    if(sum == num && num > 0)
    {
        printf("%d is PERFECT NUMBER", num);
    }
    else
    {
        printf("%d is NOT PERFECT NUMBER", num);
    }

    return 0;
}



//                         // QUESTION 18 ( Strong no )

// #include <stdio.h>

// int main() {
//     int n, temp, rem, sum3 = 0, i, fact;
    
//     printf("Enter a number: ");
//     n = 145;  /* Testing with 145 */
//     temp = n;

//     while (n) {
//         i = 1;
//         fact = 1;
//         rem = n % 10;
        
//         /* Calculate factorial of digit */
//         while (i <= rem) {
//             fact = fact * i;
//             i++;
//         }
        
//         sum3 = sum3 + fact;
//         n = n / 10;
//     }

//     if (sum3 == temp)
//         printf("%d is a strong number<br>", temp);
//     else
//         printf("%d is not a strong number<br>", temp);

//     return 0;
// }


 
//             // QUESTION No 19 ( Factors of a no )/


// #include <stdio.h>

// int main()
// {
//     int i2, num2;

//     /* Input number from user */
//     printf("Enter any number to find its factor: ");
//     scanf("%d", &num2);

//     printf("All factors of %d are: \n", num2);

//     /* Iterate from 1 to num */
//     for(i2=1; i2<=num2; i2++)
//     {
//         /* 
//          * If num is exactly divisible by i
//          * Then i is a factor of num
//          */

//          if(num2 % i2 == 0)
//         {
//             printf("%d, ",i2);
//         }
//     }

//     return 0;
// }


                // QUESTION NO 20 ( Largest prime factor )


// #include <math.h>

// // A function to find largest prime factor
// long long maxPrimeFactors(long long n)
// {
//     // Initialize the maximum prime factor
//     // variable with the lowest one
//     long long maxPrime = -1;

//     // Print the number of 2s that divide n
//     while (n % 2 == 0) {
//         maxPrime = 2;
//         n >>= 1; // equivalent to n /= 2
//     }

//     // n must be odd at this point, thus skip
//     // the even numbers and iterate only for
//     // odd integers
//     for (int i = 3; i * i <= n; i += 2) {
//         while (n % i == 0) {
//             maxPrime = i;
//             n = n / i;
//         }
//     }

//     // This condition is to handle the case
//     // when n is a prime number greater than 2
//     if (n > 2)
//         maxPrime = n;

//     return maxPrime;
// }

// // Driver program to test above function
// int main()
// {
//     long long n = 15;
//     printf("%lld\n", maxPrimeFactors(n));

//     n = 25698751364526;
//     printf("%lld", maxPrimeFactors(n));

//     return 0;
// }

