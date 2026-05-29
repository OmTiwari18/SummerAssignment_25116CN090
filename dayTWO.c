#include <stdio.h>

int main() {

// question 5

    int num, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("Sum of digits of the number is %d", sum);


    // question 6

    int num, reverse = 0, rem;
  printf("enter a number ");
  scanf("%d" , &num);
    while(num != 0)
    {
      rem = num % 10;
      reverse = reverse * 10 + rem;
      num /= 10;
    }
 
    printf("Reverse: %d\n",reverse);


    //  Question 7

        int num, rem, prod = 1;
        printf("Enter a number: ");
        scanf("%d", &num);
        while(num != 0)
            {
        rem = num % 10; 
        prod *= rem; 
        num /=  10;  
        }
        printf("%d", prod);


        // question 8

        int n, reversed = 0, remainder, original;
        printf("Enter an integer: ");
        scanf("%d", &n);
        original = n;
        while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
        if (original == reversed)
        printf("%d is a palindrome.", original);
        else
        printf("%d is not a palindrome.", original);

        return 0;

}