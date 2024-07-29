//Write a program to find the mean of n numbers using arrays.
#include<conio.h>
#include<stdio.h>
int main()
{
    int count=0,i,n;
    float mean=0;
    printf("enter the n element of the array");
    scanf("%d",&n);
    int arr[n],sum=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        //count+=1;
    }
    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
        mean=sum/n;
    }
    printf("mean of the all numbers is %2f",mean);
    return 0;
}
