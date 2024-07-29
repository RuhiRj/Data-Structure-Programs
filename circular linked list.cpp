//circular linked list
#include<iostream>
using namespace std;
struct node
{
    int item;
    struct node *next;
};
//create all node
void createAll(struct node **last);
void displaynode(struct node *last);
void insert_beg(struct node **last);
void insert_end(struct node **last);
void insert_After(struct node **l,int item);
void insert_before(struct node **l,int item);
void delete_beg(struct node **l);
void delete_end(struct node **l);
void delete_after(struct node **l,int item);
//void delete_list(struct node **l);
void delete_Node(struct node **l);
int main()
{
    struct node *last=NULL,*p;
    createAll(&last);
    cout<<"add node:"<<endl;
    displaynode(last);
    cout<<endl;
//    cout<<"insert begging node of the circular linked list:"<<endl;
//    insert_beg(&last);
//    displaynode(last);
//    cout<<endl;
//    cout<<"insert end node of the circular linked list:"<<endl;
//    insert_end(&last);
//    displaynode(last);
//    cout<<endl;
//    // cout<<"searching the data:";
////    searchnode(&last);
//    cout<<"insert after node:";
    insert_After(&last,90);
    displaynode(last);
    cout<<endl;
//    cout<<"insert before node:";
//    insert_before(&last,80);
//    displaynode(last);
//    cout<<endl;
//    cout<<"delete first node:";
//    delete_beg(&last);
//    displaynode(last);
//    cout<<endl;
//    cout<<"delete last node:";
//    delete_end(&last);
//    displaynode(last);
//    cout<<endl;
//    delete_after(&last,5);
//    displaynode(last);
//    cout<<endl;
//    delete_list(&last);
//    displaynode(last);
//    cout<<endl;
    cout<<"delete specific node:\n";
    delete_Node(&last);
    displaynode(last);
    cout<<endl;
    return 0;
}
void displaynode(struct node *last)
{
    struct node *ptr = last;
    if(ptr == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        do
        {
            ptr = ptr->next;
            cout << ptr->item << " ";
        }
        while(ptr != last);
    }
}
void createAll(struct node **last)
{
    struct node *n;
    int data;
    //int choice;
    cout<<"enter -1 to end"<<endl;
    cout<<"enter the data:";
    cin>>data;
    while(data!=-1)
    {
        n=(struct node*)malloc(sizeof(struct node));
        n->item=data;
        if(*last==NULL)
        {
            *last=n;
            n->next=n;
        }
        else
        {
//    //while(ptr->next!=*last)
//            {
//                ptr=ptr->next;
//            }
//            ptr->next=n;
//            n->next=*last;
//        }
            n->next=(*last)->next;
            (*last)->next=n;
            (*last)=n;
        }
        cout<<"enter the data:";
        cin>>data;

    }
}
void insert_beg(struct node **last)
{
    struct node *n;
    int data;
    cout<<"enter the data:";
    cin>>data;
    n=(struct node*)malloc(sizeof(struct node));
    n->item = data;
    if (*last == NULL) // If list is empty
    {
        n->next = n; // Point to itself
        *last = n;   // Update last to new node
    }
    else
    {
        n->next = (*last)->next; // Connect new node to the first node
        (*last)->next = n;      // Connect last node to the new node
    }
}
void insert_end(struct node **last)
{
    struct node *n;
    int data;
    cout<<"enter the data:";
    cin>>data;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    if(*last==NULL)
    {
        n->next=n;
        *last=n;
    }
    else
    {
        n->next=(*last)->next;
        (*last)->next=n;
        (*last)=n;
    }
}
void insert_After(struct node **l,int item)
{
    struct node *n,*temp;
    int data;
    cout<<"enter the data:";
    cin>>data;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    if(*l==NULL)
    {
        *l=n;
        n->next=n;
    }
    else
    {
        temp=(*l)->next;
        while(temp->item!=item)
        {
            temp=temp->next;
        }
        n->next=temp->next;
        temp->next=n;


    }
}
void insert_before(struct node **l,int item)
{
    struct node *ptr,*pr,*n;
    int data;
    cout<<"enter the data:";
    cin>>data;
    n=(struct node*)malloc(sizeof(struct node));
    n->item =data;
    if(*l==NULL)
    {
        *l=n;
        n->next=n;
    }
    else
    {
        ptr=(*l)->next;
        pr=ptr;
        while(ptr->item!=item)
        {
            pr=ptr;
            ptr=ptr->next;
        }
        n->next=ptr;
        pr->next=n;
    }
}
void delete_beg(struct node **l)
{
    struct node *ptr;
    if(*l==NULL)
    {
        cout<<"list is empty:";
    }
    else
    {
        ptr=(*l)->next;
        (*l)->next=ptr->next;
        free(ptr);
    }
}
void delete_end(struct node **l)
{
    struct node *ptr;
    if(*l==NULL)
        cout<<"list is empty:";
    else
    {
        ptr=(*l)->next;
        while(ptr->next!=*l)
        {
            ptr=ptr->next;
        }
        ptr->next=(*l)->next;
        free(*l);
        *l=ptr;
    }
}
void delete_after(struct node **l,int item)
{
    struct node *ptr,*temp;
    if(*l==NULL)
        cout<<"list empty:";
    else
    {
        ptr=(*l)->next;
        while(ptr->item!=item)
        {
            ptr=ptr->next;
        }
        temp=ptr->next;
        ptr->next=temp->next;
        free(temp);
    }
}
void delete_before(struct node **l,int item)
{
    struct node *ptr,*temp;
    if(*l==NULL)
        cout<<"list empty";
    else
    {
        ptr=(*l)->next;
        while(ptr->item!=item)
        {
            ptr=ptr->next;
        }

    }
}
void delete_Node(struct node **l)
{
    struct node *ptr,*temp;
    if(*l==NULL)
        cout<<"empty list:";
    else
    {
        int data;
        cout<<"enter the data:";
        cin>>data;
        ptr=(*l);
        while(ptr->item!=data)
        {
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        free(ptr);

    }
}
