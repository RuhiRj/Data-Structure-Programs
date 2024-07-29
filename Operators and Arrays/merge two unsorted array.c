//Write a program to merge two unsorted arrays.
#include<stdio.h>
#include<conio.h>
int main()
{
    int m1,m2,t,i,index=0;
    printf("enter the size of the element of the first array:");
    scanf("%d",&m1);
    int arr1[m1];
    for(i=0;i<m1;i++){
        printf("\n arr1[%d]",i);
        scanf("%d",&arr1[i]);
    }
    printf("enter the size of the second element of the array:");
    scanf("%d",&m2);
    int arr2[m2];

    for(i=0;i<m2;i++)
    {
        printf("\n arr2[%d]",i);
        scanf("%d",&arr2[i]);
    }
    t=m1+m2;
    int arr3[t];
    for(i=0;i<m1;i++){
        arr3[index]=arr1[i];
        index++;
    }
    for(i=0;i<m2;i++){
        arr3[index]=arr2[i];
        index++;
    }
    printf("After merging the array is");
    for(i=0;i<t;i++)
    {
        printf("\n arr3[%d],%d",i,arr3[i]);
    }
    return 0;
}
