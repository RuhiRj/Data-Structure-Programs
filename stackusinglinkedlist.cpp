#include<iostream>
using namespace std;
struct node
{
    int info;
    struct node *next;
};
void pushNode(struct node **start,int data)
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->info=data;
    if(*start==NULL)
    {
        *start=n;
        n->next=NULL;
    }
    else
    {
        n->next=*start;
        *start=n;
    }
}
int popNode(struct node **start)
{
    struct node *ptr;
    int item;
    if(*start==NULL)
    {
        cout<<"stack is empty:";
        //return 0;
    }
    else
    {
        ptr=*start;
        item=ptr->info;
        *start=ptr->next;
        free(ptr);
        return item;
    }
}
void display(struct node *start)
{
    if(start==NULL)
    {
        cout<<"stack is empty:"<<endl;
    }
    else
    {
        while(start!=NULL)
        {
            cout<<start->info<<"\n";
            start=start->next;
        }
    }

}
void pushNode(struct node **start,int data);
int popNode(struct node **start);
void display(struct node *start);
int main()
{
    struct node *top=NULL;
    pushNode(&top,23);
    pushNode(&top,90);
    pushNode(&top,55);
    pushNode(&top,99);
    display(top);
    cout<<endl;
    popNode(&top);
    display(top);
    cout<<endl;
    return 0;
}

