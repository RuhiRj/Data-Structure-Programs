#include<iostream>
using namespace std;
struct ArrayStack
{
    int top;
    int capacity;
    int *Array;
};
 struct ArrayStack* createstack(int cap)
{
    struct ArrayStack *s;
    s=(struct ArrayStack *)malloc(sizeof(struct ArrayStack));
    s->capacity=cap;
    s->top=-1;
    s->Array=(int*)malloc(sizeof(struct ArrayStack)*cap);
    return s;
}
void push(struct ArrayStack *s,int item)
{
    if(s->capacity-1==s->top)
    {
        cout<<"overflow\n";
    }
    else
    {
        s->top++;
        s->Array[s->top]=item;
    }
}
int pop(struct ArrayStack *s)
{
    int item;
    if(s->top==-1)
    {
        cout<<"underflow\n";
        return 0;
    }
    else
    {
        item=s->Array[s->top];
        s->top--;
        return item;
    }
}
void display(struct ArrayStack *s)
{
   int i;
   for(i=s->top;i>=0;i--)
    cout<<s->Array[i]<<endl;

}
 struct ArrayStack* createstack(int cap);
void push(struct ArrayStack *s,int item);
void display(struct ArrayStack *s);
int pop(struct ArrayStack *s);
int main()
{

    struct ArrayStack *stack;
    stack=createstack(5);
    push(stack,6);
    push(stack,9);
    push(stack,90);
    push(stack,99);
    display(stack);
    cout<<endl;
    pop(stack);
    pop(stack);
    display(stack);
    cout<<endl;
    return 0;
}
