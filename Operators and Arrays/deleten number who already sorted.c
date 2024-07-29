// Write a program to delete a number from an array that is already sorted in ascending order.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    printf("enter the element in sorted form");
    printf("enter the size of the element: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
    printf("\n arr[%d]",i);
    scanf("%d",&arr[i]);
    }
    int num;
    printf("enter the number who is want to deleted:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            for(j=i;j<n-1;j++)
                arr[j]=arr[j+1];
        }
    }
    n=n-1;
    // i--;
    printf("after the delete of the number from the array is");
    for(i=0;i<n;i++)
    {
        printf("\n arr[%d],%d",i,arr[i]);
    }
    return 0;


}
