//Write a program to find whether the array of integers contains a duplicate number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,flag=0;
    printf("enter the number of the array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        printf("arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0 ; j<n; j++)
        {
            if(arr[i]==arr[j] &&(j!=i))
            {
                flag=1;
                printf("\n Duplicate numbers found at locations %d and %d", i, j);
            }

            if(flag==0)
            {
                printf("\n No any duplicate values:");
            }
        }
    }
    return 0;

}
