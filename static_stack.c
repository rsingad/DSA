#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack[MAX];
int top = -1;
int pop(){
    int popedElement;
    if(top == -1){
        printf("stack is already empty\n");
        return 0;
    }
    else{
        popedElement=stack[top];
        top =top-1;
        printf("the top element %d is sucessfully removed on index %d\n",popedElement,top+1);
        return popedElement;
        // return stack[top];
}
}
void push(int value)
{
    if (top == MAX - 1)
    {
        printf("stack is full\n");
    }
    else
    {
        top = top + 1;
        stack[top] = value;
        printf(" the element  %d sucessfully added on index %d .\n",value,top);
    }
}
void display()
{
    if (top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("show stack\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
printf("----------------------------------------------------\n");
}
int main()
{

    printf("implement the static stack using array.\n");
    display();
    push(10);
    push(20);
    push(55);
    push(300);
    display();
    pop();
    display();
    pop();
    display();
    push(500);
    push(44);
    push(101);
    push(7);//stack is full
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();//stack is empty




    return 0;
}