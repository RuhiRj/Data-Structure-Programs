#include<stdio.h>
#include<conio.h>
struct node
{
    char item;
    struct node *next;
};
void createnode(struct node **start)
{
    struct node *ptr,*new;
    char choice;
    char ch;
    do
    {
        printf("enter the character:");
        scanf(" %c",&ch);
        new=(struct node*)malloc(sizeof(struct node));
        new->item=ch;
        if(*start==NULL)
        {
            *start=new;
            new->next=NULL;
        }
        else{
                ptr=*start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=new;
        new->next=NULL;
        }
        printf(" do u want to add more characters (y/n:\n");
        scanf(" %c",&choice);
    }while(choice!='n');
}
void displaynode(struct node *start)
{
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        printf("%c ",ptr->item);
    }
    ptr=ptr->next;
}
int main()
{
    struct node *ptr;
    createnode(&ptr);
    //displaynode(ptr);
    return 0;

}
