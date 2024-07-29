#include<stdio.h>
#include<conio.h>
struct node
{
    int item;
    struct node *next;
};
void createnode(struct node **start)
{
    struct node *ptr,*new;
    int num;
    char choice;
    do
    {
        printf("Enter the data: ");
        scanf("%d",&num);


        new=(struct node*)malloc(sizeof(struct node));
        new->item=num;

        if(*start==NULL)
        {
            *start=new;
            new->next=NULL;
        }
        else
        {
            ptr=*start;
            while(ptr->next!=NULL)
            {

                ptr=ptr->next;
            }
            ptr->next=new;
            new->next=NULL;
        }

        printf("\nDo u want to add more node:(y/n): ");
        scanf(" %c", &choice);
       // printf("\n");

    }while(choice != 'n');
}
void findoddandevenno(struct node *start)
{
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        if(ptr->item%2==0)
        {
            printf("%d ",ptr->item);
        }
        ptr=ptr->next;
    }
}
void displaynode(struct node *start)
{
    struct node *t=start;
    while(t!=NULL)
    {
        printf("%d ",t->item);
        t=t->next;
    }
}
void displaynode(struct node *start);
void findoddandevenno(struct node *start);
int main()
{
    struct node *pr=NULL;
    createnode(&pr);
    displaynode(pr);
    printf("\n");
    findoddandevenno(pr);
}
