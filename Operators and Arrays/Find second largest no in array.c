//Write a program to find the second largest of n numbers using an array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    printf("enter the n element of the array:");
    scanf("%d",&n);
    int arr[n];
    int temp=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    printf("%d",arr[1]);
    return 0;
}
