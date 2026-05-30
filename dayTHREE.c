                 //    question no 9 ( PRIME NUMBER )   


// #include<stdio.h>
// int main()
// { 
//     int n , prime = 0 ,i ;
//     printf(" enter a number ");
//     scanf("%d",&n);
    
//         for ( i=1;i<=n;i++)
//         {
//             if(n%i==0)
//             {
//             prime++;
//             }
//         }
//         if(prime == 2)
//         {
//             printf("number is prime ");
//         }
//         else
//         {
//             printf("number is not prime ");
//         }    
        
// }



                        //   Question No 10 (PRINTING ALL THE PRIME NO IN A RANGE)


// #include<stdio.h>
// int main ()
// {
//     int n , i , j , prime ;
//     printf ( "ENter a number till where the range has to be printed" );
//     scanf (" %d " , &n );
//     for ( i=2 ; i<=n ; i++ )
//     {
//         prime=1;
//         for ( j=2 ; j*j<=i ; j++ )
//         {
//             if(i%j==0)
//             {
//                 prime=0 ;
//                 break ;
//             }
//             printf( " %d " ,i ) ;   
//         }
            
//     }
//     printf(" these are the prime numbers ");
// }



                            // QUestion No 11 (GCD Of Two number)


// #include <stdio.h>

// int main() {
//     int a, b, temp;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     while (b != 0) {
//         temp = b;
//         b = a % b;
//         a = temp;
//     }

//     printf("GCD is %d\n", a);
//     return 0;
// }




                            // Question no 12 ( LCM of two No. ) 



 #include <stdio.h>
 int main() 
 {
     int num1, num2, max;
     printf("Enter two numbers: ");
     scanf("%d %d", &num1, &num2);
     max = (num1 > num2) ? num1 : num2; 
     while (1) 
     {         if (max % num1 == 0 && max % num2 == 0) 
         {
             printf("LCM of %d and %d is %d\n", num1, num2, max);
             break;
         }
         max++;  
    }
     return 0;
 }