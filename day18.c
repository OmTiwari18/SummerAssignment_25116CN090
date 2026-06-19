                        //bubble sort


// #include <stdio.h>
// int main()
// {
//     int a[100], number, i, j, temp;
    
//     printf("\n Please Enter the total Number of Elements  :  ");
//     scanf("%d", &number);
    
//     printf("\n Please Enter the Array Elements  :  ");
//     for(i = 0; i < number; i++)
//         scanf("%d", &a[i]);

//     for(i = 0; i < number - 1; i++)
//     {
//         for(j = 0; j < number - i - 1; j++)
//         {
//             if(a[j] > a[j + 1])
//             {
//                 temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     }
//     printf("\n List Sorted in Ascending Order : ");
//     for(i = 0; i < number; i++)
//     {
//         printf(" %d \t", a[i]);
//     }
//     printf("\n");
//     return 0;
// }



                        // SELECTION SORT



// #include <stdio.h>
// int main()
// {
//     int a[100], number, i, j, temp;
//     printf("\n Please Enter the total Number of Elements  :  ");
//     scanf("%d", &number);
//     printf("\n Please Enter the Array Elements  :  ");
//     for(i = 0; i < number; i++)
//         scanf("%d", &a[i]);

//     for(i = 0; i < number; i++) {
//         for(j = i + 1; j < number; j++) {
//             if(a[i] > a[j]) {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     printf("\n Selection Sort Result : ");
//     for(i = 0; i < number; i++)  {
//         printf(" %d \t", a[i]);
//     }
//     printf("\n");
//     return 0;
// }



                        // BINARY SEARCH


// #include<stdio.h>   
// int main()   
// {  
//     int c, first, last, middle, n, search, array[100];  
//     printf("Enter number of elements\n");  
//     scanf("%d", & n);  
//     printf("Enter %d integers\n", n);  
//     for (c = 0; c < n; c++) scanf("%d", & array[c]);  
//     printf("Enter value to find\n");  
//     scanf("%d", & search);  
//     first = 0;  
//     last = n - 1;  
//     middle = (first + last) / 2;  
//     while (first <= last)  
//     {  
//         if (array[middle] < search) first = middle + 1;  
//         else if (array[middle] == search) {  
//             printf("%d found at location %d.\n", search, middle + 1);  
//             break;  
//         } else last = middle - 1;  
//         middle = (first + last) / 2;  
//     }  
//     if (first > last) printf("Not found! %d is not present in the list.\n", search);  
//     return 0;  
// }  



                        // ARRAY IN DESCENDING ORDER



#include <stdio.h>

int main()
{
	int Array[50], i, j, temp, Size;
	
	printf("\nPlease Enter the Number of elements in an array  :  ");
	scanf("%d", &Size);
	
	printf("\nPlease Enter %d elements of an Array \n", Size);
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &Array[i]);
    }     
	for (i = 0; i < Size; i++)
	{
		for (j = i + 1; j < Size; j++)
		{
			if(Array[i] < Array[j])
			{
				temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
			
		}
	}
	printf("\n **** Array of Elemenst in Descending Order are : ****\n");
	for (i = 0; i < Size; i++)
	{
		printf("%d\t", Array[i]);
	}
	
	return 0;
}