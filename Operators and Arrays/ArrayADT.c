//An array ADT(Abstract data type) //Data Structure //Set of Operations
#include<stdio.h>
#include<conio.h>
struct arrayADT//Abstract data type
{
    int capacity;
    int lastindex;
    int *ptr;
};
//creation of array to specified size and
struct arrayADT* createarray(int capacity);
int getItem(struct arrayADT *arr, int index);
int setItem(struct arrayADT *arr,int index, int value);
int removeitem(struct arrayADT *arr,int index);
int countitem(struct arrayADT *arr);
int searchitem(struct arrayADT *arr,int item);
void sort(struct arrayADT *arr);
int editItem(struct arrayADT *arr,int index, int newdata);
void doubleArray(struct arrayADT *arr);
void halfArray(struct arrayADT *arr);
struct arrayADT*  createarray(int capacity)
{
    struct arrayADT *arr;
    arr=( struct arrayADT*)malloc(sizeof(struct arrayADT));/*malloc create the memory through the DMA
    and return the value void data type so typecast first whichever type want to return the data.*/
    arr->capacity=capacity;
    arr->lastindex=-1;
    arr->ptr=(int*)malloc(arr->capacity*sizeof(int));
    return arr;
}
//retrieve a particular item

int getItem(struct arrayADT *arr, int index)
{
    if(arr->lastindex<index)
    {
        printf("\n Invalid index");
        return -1;
    }
    else
    {
        return (arr->ptr[index]);
    }
}
//store an item
int setItem(struct arrayADT *arr, int index, int value)
{
    int i;
    if(arr->lastindex==arr->capacity-1)
    {
        printf("Overflow");
        return 0;
    }
    if(index<0 || (index>arr->lastindex+1))
    {
        printf("invalid index");
        return 0;
    }
    if(arr->lastindex>=index)
    {
        arr->lastindex=arr->lastindex+1;
        i=arr->lastindex;
        while(i!=index)
        {
            arr->ptr[i]=arr->ptr[i-1];
            i--;
        }
        arr->ptr[index]=value;
        return 1;
    }
    if(index==arr->lastindex+1)
    {
        arr->lastindex=arr->lastindex+1;
        arr->ptr[arr->lastindex]=value;
        return 1;
    }

}
// modify item at given index
int editItem(struct arrayADT *arr,int index, int newdata)
{
    if((index<0)||(index>arr->lastindex))
    {
        printf("Invalid index");
        return 0;
    }
    else
    {
        arr->ptr[index]=newdata;
        return 1;
    }
}
//count item to store an array
int countitem(struct arrayADT *arr)
{
    //arr->lastindex=arr->lastindex+1;
    return arr->lastindex+1;
}
//remove an item at an given index
int removeitem(struct arrayADT *arr,int index)
{
    if((index<0)||(index>arr->lastindex))
    {
        printf("Invalid index");
        return 0;
    }
    if(index==arr->lastindex)
    {
        arr->lastindex=arr->lastindex-1;
        return 1;
    }
    if(index<arr->lastindex)
    {
        int i;
        i=index;
        while(i<arr->lastindex)
        {
            arr->ptr[i]=arr->ptr[i+1];
            i++;
        }
        arr->lastindex=arr->lastindex-1;
        return 1;
    }
}
//search an item
int searchitem(struct arrayADT *arr, int index)
{
    int i;
    if(arr->lastindex==-1)
    {
        return -1;
    }
    for(i=0; i<=arr->lastindex; i++)
    {
        if((arr->ptr[i])==(index))
        {
            return 1;
        }

        return -1;
    }
}
//sort an array
void sort(struct arrayADT *arr)
{
    int i,n,t,r;
    n=arr->lastindex+1;
    for(r=0; r<=n-1; r++)
    {
        for(i=0; i<=n-1-r; i++)
        {
            if(arr->ptr[i]>arr->ptr[i+1])
            {
                t=arr->ptr[i];
                arr->ptr[i]=arr->ptr[i+1];
                arr->ptr[i+1]=t;
            }
        }
    }
}
void sort1(struct arrayADT *arr)
{
    int temp,i,j;
    for(i=0; i<arr->lastindex; i++)
    {
        for(j=0; j<arr->lastindex; j++)
        {
            if(arr->ptr[i]<arr->ptr[j])
            {
                temp=arr->ptr[i];
                arr->ptr[i]=arr->ptr[j];
                arr->ptr[j]=temp;
            }
        }
    }
    for(i=0; i<arr->lastindex+1; i++)
    {
        printf("%d ",arr->ptr[i]);
    }
}
void doubleArray(struct arrayADT *arr)
{
    int *temp;
    temp=(int*)malloc(sizeof(int)*arr->capacity*2);
    for(int i=0; i<=arr->lastindex; i++)
    {
        temp[i]=arr->ptr[i];
    }
    free(arr->ptr);
    arr->ptr=temp;
    arr->capacity*=2;
}
void halfArray(struct arrayADT *arr)
{
    int *temp;
    temp=(int*)malloc(sizeof(int)*arr->capacity*1/2);
    for(int i=0; i<=arr->lastindex; i++)
    {
        temp[i]=arr->ptr[i];
    }
    free(arr->ptr);
    arr->ptr=temp;
    arr->capacity*=1/2;
}
int main()
{
    int i;
    struct arrayADT *arr;
    arr=createarray(5);
    setItem(arr,0,20);
    setItem(arr,1,30);
    setItem(arr,2,40);
    setItem(arr,3,50);
    sort(arr);
    printf("\n");
    printf("%d\n", countitem(arr));
    for(i=0; i<countitem(arr); i++)
    {
        printf("%d ",getItem(arr,i));
    }
    printf("\n");
    printf("%d " , doubleArray(arr));
    printf("\n");
    printf("%d\n" , halfArray(arr));
    sort1(arr);
    return 0;
}
