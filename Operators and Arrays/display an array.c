// Write a program to display an array of given numbers.
#include<conio.h>
#include<stdio.h>
int main()
{

    // int arr[]={2,3,9,5,6,7},n;
    int n;
    printf("enter the number of the array size:");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr1,*ptr2;
    ptr1=arr;
    ptr2=&arr[n-1];
    while(ptr1<=ptr2)
    {
        printf("\n %d",*ptr1);
        ptr1++;
    }
    return 0;
}
/*main()
{
    int arr[]= {1,2,3,4,5};
    printf("\n Address of array = %p %p %p", *&arr, *&arr[4], **&arr);
    return 0;
}*/
