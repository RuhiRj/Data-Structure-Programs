//Write a program to merge two sorted arrays.
#include <conio.h>
#include<stdio.h>
int main()
{
    int size1,size2,mergesize,i=0,j=0,k=0;
    printf("enter the size of the first array");
    scanf("%d",&size1);
    int arr1[size1];
    for(i=0; i<size1; i++)
    {
        printf("\n arr1[%d]",i);
        scanf("%d",&arr1[i]);
    }
    printf("enter the size of the second array:");
    scanf("%d",&size2);
    int arr2[size2];
    for(j=0; j<size2; j++)
    {
        printf("\n arr2[%d]",j);
        scanf("%d",&arr2[j]);
    }
    mergesize=size1+size2;
    int mergearr[mergesize];
    while(i<size1 && j<size2)
    {
        if(arr1[i]<arr2[j]){
            mergearr[k++]=arr1[i++];
        }
        else{
            mergearr[k++]=arr2[j++];
        }
    }
    while(i<size1)
    {
        mergearr[k++]=arr1[i++];
    }
    while(j<size2)
    {
        mergearr[k++]=arr2[j++];
    }
    printf("merge array is=");
    for(k=0; k<mergesize; k++)
    {
        printf("\n mergearr[%d],%d",k,mergearr[k]);
    }
    return 0;
}
