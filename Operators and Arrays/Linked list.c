/*insertion //deletion //updation
#include<conio.h>
#include<stdio.h>
struct node
{
    int item;
    struct node *next;
};
void insertAtLast(struct node **s,int data)//it point the start pointer
{
    struct node *n,*t;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    n->next=NULL;
    if(*s==NULL)
    {
        *s=n;
    }
    else{
        t=*s;
        while(t->next!=NULL)
            t=t->next;
        t->next=n;
    }
}
void viewList(struct node *start)
{
    while(start)
    {
      printf("%d",start->item);
      start=start->next;
    }
}
void deleteFirst(struct node **s)
{
    struct node *t;
    if(*s!=NULL)
    {
        t=*s;
        *s=t->next;
        free(t);
    }
}
void deleteFirst(struct node **s);
void insertAtLast(struct node **s,int data);
void viewList(struct node *start);
int main()
{
    struct node *start;
    insertAtLast(&start,20);
    insertAtLast(&start,230);
    insertAtLast(&start,223);
    insertAtLast(&start,33);
    insertAtLast(&start,3);
    printf("\n");
    viewList(start);
    deleteFirst(&start);
    return 0;
}
*/
