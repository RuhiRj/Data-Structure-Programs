#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int item;
    struct node *next;
};

void insertAtfirst(struct node **s,int data)
{
    struct node *t,*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    n->next = *s;
    if(*s==NULL)
        *s=n;
    else
    {
        t=*s;
        while(t->next!=NULL)
        {
            t=t->next;
            t->next=n;
        }
    }
}
void insertAfterNode(struct node **s,int val,int data)
{
    struct node *n,*ptr,*preptr;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    if(*s==NULL)
    {
        n->next=NULL;
        *s=n;
    }
    else
    {
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
}
void insertBeforenode(struct node **s,int val,int data)
{
    struct node *ptr,*preptr,*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    if(*s==NULL)
    {
        n->next=*s;
        *s=n;
    }
    ptr=*s;
    while(ptr->item!=val)
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

void deleteAtfirst(struct node **s)
{

    struct node *ptr;
    if(*s==NULL){
        cout<<"list is already empty:";
    }
     ptr = *s;
      *s = ptr -> next;
      free(ptr);
}
void deleteAfternode(struct node**s,int val)
{
    struct node *ptr,*preptr=NULL;
    if(*s==NULL){
        cout<<"list is already empty:";
    }
    ptr = *s;
    preptr = ptr;
    while (preptr != NULL && preptr->item != val) {
        preptr = ptr;
        ptr = ptr->next;
    }
    struct node *temp = preptr->next;
    preptr->next = temp->next;
    free(temp);
}
/*void deletespecificenode(struct node **s,int val)
{
    struct node *ptr,*preptr=NULL;
    if(*s==NULL){
        cout<<"list is already empty:";
    }
    ptr=*s;
    while(ptr!=NULL && ptr->item!=val){
        preptr=ptr;
        ptr=ptr->next;
    }
    struct node *temp = preptr->next;
    preptr->next = temp->next;
    free(temp);
}*/
void deleteBeforenode(struct node **s, int val) {
    if (*s == NULL || (*s)->next == NULL) {
        printf("List is empty or contains only one node\n");
        return;
    }
    struct node *ptr = *s;
    struct node *preptr = NULL;
    while (ptr != NULL && ptr->item != val) {
        preptr = ptr;
        ptr = ptr->next;
    }
    struct node *temp = preptr->next;
    preptr->next = temp->next;
    free(temp);
}
void displaylist(struct node *arr)
{
    while(arr)
    {
        cout<<arr->item<<endl;
        arr=arr->next;
    }
}
void deleteBeforenode(struct node **s, int val);
//void deletespecificenode(struct node **s,int val);
void deleteAfternode(struct node**s,int val);
void deleteAtfirst(struct node **s);
void insertAtfirst(struct node **s,int data);
void insertBeforenode(struct node **s,int val,int data);
void insertAfterNode(struct node **s,int val,int data);
void insertAtLast(struct node **s,int data);
void displaylist(struct node *arr);
int main()
{
    struct node *ptr=NULL;
    insertAtfirst(&ptr,100);
    //displaylist(ptr);
    //  insertBeforenode(&ptr,70,10);
    displaylist(ptr);
    insertAtLast(&ptr,45);
    insertAtLast(&ptr,70);
    insertAtLast(&ptr,90);
    insertAtLast(&ptr,7);
    insertAtLast(&ptr,9);
    displaylist(ptr);
    cout<<endl;
    insertBeforenode(&ptr,70,10);
    displaylist(ptr);
    cout<<endl;
    insertAfterNode(&ptr,70,700);
    deleteAtfirst(&ptr);
    displaylist(ptr);
    cout<<endl;
    deleteAfternode(&ptr,45);
   displaylist(ptr);
   cout<<endl;
    //deletespecificenode(&ptr,9);
    displaylist(ptr);
    cout<<endl;
    deleteBeforenode(&ptr,7);
    displaylist(ptr);
    return 0;

}
