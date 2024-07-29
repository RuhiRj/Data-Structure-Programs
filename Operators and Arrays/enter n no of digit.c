//Write a program to enter n number of digits. Form a number using these digits.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("enter the number of the string:");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        printf("\n arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    int r=0;
    for(i=0; i<n; i++)
    {
        r=((r*10)+(arr[i]));
    }
    printf("\n %d",r);
    return 0;

}
