#include<iostream>
using namespace std;
struct node
{
    struct node *prev;
    int item;
    struct node *next;
};
void create_All(struct node **s)
{
    struct node *ptr,*n;
    int data;
    cout<<"enter -1 to end:";
    cout<<"enter the data:";
    cin>>data;
    while(data!=-1)
    {
    n=(struct node *)malloc(sizeof(struct node));
    n->item=data;
    if(*s==NULL)
    {
        n->prev=n;
        n->next=n;
        *s=n;
    }
    else
    {
        ptr=*s;


    }
}
