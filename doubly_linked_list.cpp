#include<iostream>
using namespace std;
struct node
{
    struct node *prev;
    int item;
    struct node *next;
};
void insert_All(struct node **s);
void display(struct node *s);
void insert_beg(struct node **s);
void insert_end(struct node **s);
void insert_After(struct node **s,int data);
void insert_before(struct node **s,int data);
void delete_beg(struct node **s);
void delete_end(struct node **s);
void delete_after(struct node **s,int data);
void delete_before(struct node **s,int data);
void delete_list(struct node *s);
int main()
{
    struct node *start=NULL;
    insert_All(&start);
    display(start);
    cout<<endl;
//    cout<<"beggin insertion:";
//    insert_beg(&start);
//    display(start);
//    cout<<endl;
//    cout<<"end insertion";
//    insert_end(&start);
//    display(start);
//    cout<<endl;
//    cout<<"after insertion:";
//    insert_After(&start,90);
//    display(start);
//    cout<<endl;
//    cout<<"before insertion:";
//    insert_before(&start,99);
//    display(start);
//    cout<<endl;
//    cout<<"delete first node:";
//    delete_beg(&start);
//    display(start);
//    cout<<endl;
//    cout<<"delete last node:";
//    delete_end(&start);
//    display(start);
//    cout<<endl;
//    cout<<"delete after node:";
//    delete_after(&start,80);
//    display(start);
//    cout<<endl;
//    cout<<"delete before node:";
//    delete_before(&start,70);
//    display(start);
//    cout<<endl;
    cout<<"delete list:";
    delete_list(start);
    display(start);
    cout<<endl;
}
void insert_All(struct node **s)
{
    struct node *ptr,*n;
    int data;
    cout<<"enter -1 for exit:"<<endl;
    cout<<"enter the data:";
    cin>>data;
    while(data!=-1)
    {
        n=(struct node*)malloc(sizeof(struct node));
        n->item=data;
        if(*s==NULL)
        {
            n->prev=NULL;
            n->next=NULL;
            *s=n;
        }
        else
        {
            ptr=*s;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=n;
            n->prev=ptr;
            n->next=NULL;
        }
        cout<<"enter the data:";
        cin>>data;
    }
}
void display(struct node *s)
{
    struct node *ptr=s;
    if(s==NULL)
    {
        cout<<"list is empty:\n";
    }
    else
    {
        do
        {
            ptr=ptr->next;
            cout<<ptr->item<<" ";
        }
        while(ptr->next!=NULL);
    }
}
void insert_beg(struct node **s)
{
    struct node *ptr,*n;
    int data;
    cout<<"enter the data:";
    cin>>data;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    if(*s==NULL)
    {
        n->next=NULL;
        n->prev=NULL;
        *s=n;
    }
    else
    {
        ptr=*s;
        ptr->prev=n;
        n->next=NULL;
        n->next=*s;
        *s=n;
    }
}
void insert_end(struct node **s)
{
    struct node *n,*ptr;
    int data;
    cout<<"enter the data:";
    cin>>data;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    if(*s==NULL)
    {
        n->prev=NULL;
        n->next=NULL;
        *s=n;
    }
    else
    {
        ptr=*s;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=n;
        n->prev=ptr;
        n->next=NULL;
    }
}

void insert_After(struct node **s,int data)
{
    struct node *n,*ptr;
    int num;
    cout<<"enter the data:";
    cin>>num;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=num;
    if(*s==NULL)
    {
        n->next=NULL;
        n->prev=NULL;
        *s=n;
    }
    else
    {
        ptr=*s;
        while(ptr->item!=data)
        {
            ptr=ptr->next;
        }
        n->next=ptr->next;
        n->prev=ptr;
        ptr->next->prev=n;
        ptr->next=n;
    }
}
void insert_before(struct node **s,int data)
{
    struct node *n,*ptr;
    int num;
    cout<<"enter the data:";
    cin>>num;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=num;
    if(*s==NULL)
    {
        n->next=NULL;
        n->prev=NULL;
        *s=n;
    }
    else
    {
        ptr=*s;
        while(ptr->item!=data)
        {
            ptr=ptr->next;
        }
        ptr->prev->next=n;
        n->prev=ptr->prev;
        n->next=ptr;
        ptr->prev=n;
    }
}
void delete_beg(struct node **s)
{
    struct node *ptr;
    if(*s==NULL)
    {
        cout<<"list is empty:";
    }
    else
    {
        ptr=*s;
        *s=(*s)->next;
        (*s)->prev=NULL;
        free(ptr);
    }
}
void delete_end(struct node **s)
{
    struct node *ptr;
    if(*s==NULL)
    {
        cout<<"list is empty:";
    }
    else
    {
        ptr=*s;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->prev->next=NULL;
        free(ptr);
    }
}
void delete_after(struct node **s,int data)
{
    struct node *ptr;
    if(*s==NULL)
        cout<<"list is empty:";
    else
    {
        ptr=*s;
        while(ptr->item!=data)
        {
            ptr=ptr->next;
        }
        ptr->next=ptr->next->next;
        ptr->next->prev=ptr;

    }
}
void delete_before(struct node **s,int data)
{
    struct node *ptr,*temp;
    if(*s==NULL)
        cout<<"list is empty:";
    else
    {
        ptr=*s;
        while(ptr->item!=data)
        {
            temp=ptr;
            ptr=ptr->next;
        }
        ptr->prev=temp->prev->next;
        temp->prev->next=ptr;
        free(temp);
    }
}
void delete_list(struct node *s)
{
    struct node *temp;
    if(s==NULL)
        cout<<"list is empty:";
    else
    {
        temp=s;
        while(temp->next!=NULL)
            temp=temp->next;
        free(temp);
    }
}























