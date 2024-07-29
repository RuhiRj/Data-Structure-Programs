//Write a program to read an array of n numbers and then find the smallest number.
#include<conio.h>
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the size of the element of the array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("\n arr[%d]",i);
        scanf("%d",&arr[i]);
    }

}
