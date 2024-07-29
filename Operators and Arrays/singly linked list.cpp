#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int item;
    struct node *next;
};
void insertAtbegin(struct node **s,int data)
{
    struct node *t,*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    n->next=NULL;
    if(*s==NULL)
    {
        *s=n;
    }
}
void insertAfterNode(struct node **s,int val,int data)
{
    struct node *n,*ptr,*preptr;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    ptr=*s;
    preptr=ptr;
    while(preptr->item!=val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=n;
    n->next=ptr;
}
void insertBeforenode(struct node **s,int val,int data)
{
    struct node *n,*ptr,*preptr;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    ptr=*s;
    while(preptr->item!=val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=n;
    n->next=ptr;
}
void insertAtLast(struct node **s,int data)
{
    struct node *t,*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    n->next=NULL;
    if(*s==NULL)
    {
        *s=n;
    }
    else
    {
        t=*s;
        while(t->next!=NULL)
            t=t->next;
        t->next=n;
    }
}
void displaylist(struct node *arr)
{
//    struct node *t;

    while(arr)
    {
        cout<<arr->item<<endl;
        arr=arr->next;
    }
    //return arr;
}
void insertAtbegin(struct node **s,int data);
void insertAfterNode(struct node **s,int val,int data);
void insertBeforenode(struct node **s,int val,int data);
void insertAtLast(struct node **s,int data);
void displaylist(struct node *arr);
int main()
{
    struct node *arr=NULL;
    insertAtbegin(&arr,10);
    insertAfterNode(&arr,10,20);
    insertBeforenode(&arr,10,100);
    insertAtLast(&arr,23);
    displaylist(arr);
    cout<<endl;
    return 0;
}
