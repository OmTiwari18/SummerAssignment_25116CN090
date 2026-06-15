#include<stdio.h>
int add(int a, int b );
int main()
{
    int a, b, c, Sum;
    printf( "ENter 1st no :" );
    scanf("%d",&a);
    printf("ENter 2nd no:"); 
    scanf("%d",&b);
    c=add(a,b);
    printf("Sum is :%d", c);
    return 0;
}
int add(int a,int b)
{
    int z;
    z=a+b;
    return z;
}

