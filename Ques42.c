#include<stdio.h>
int max ( int a , int b );
int main()
{
    int a ,b ,c ;
    printf("Enter 1st no :");
    scanf("%d",&a); 
    printf("Enter 2nd no :");
    scanf("%d",&b);
    c=max(a,b);
    printf("Greatest is :%d", c);
    return 0;
}
int max ( int a , int b )
{
    int greatest;
    greatest=(a>b)?a:b;
    return greatest;
} 