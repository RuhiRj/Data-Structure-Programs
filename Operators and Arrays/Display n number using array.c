//Write a program to read and display n numbers using an array.
#include<conio.h>
#include<stdio.h>
int main()
{
    int n;
    int i;
    printf("enter the elements of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Reading all the elements is=");
    for(i=0;i<n;i++)
    {
        printf("\n arr[%d] =",i);
        scanf("%d",&arr[i]);
    }
    printf("Display all the n element");
    for(i=0;i<n;i++){
        printf("\n %d",arr[i]);
    }
    return 0;
}
