//Write a program to print the position of the smallest number of n numbers using arrays.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    printf("enter the n numbers of elements of the arrays:");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        printf("\n arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    int temp=arr[0],pos=0;
    for(i=0; i<n; i++)
    {
            if(temp<arr[i])
            {
                temp = arr[i];
               // pos=i;
            }
        }
       // printf(" Position of the smallest array is %d \n",pos);
        printf("Value of the smallest number positions array %d",arr[3]);
    return 0;
}
