#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int *stack;
int capacity = 2;
int top = -1;
void stackResize()
{
    capacity *= 2;
    stack = (int *)realloc(stack, capacity * sizeof(int));
    printf("stack size doubel,new capacity %d \n", capacity);
}
void push(int value)
{
    if (top == capacity - 1)
    {
        stackResize();
    }
    top = top + 1;
    stack[top] = value;
    printf("pused %d into the stack\n", value);
}
void pop()
{
    if (top == -1)
    {
        printf("stack is already empty");
    }
    else{
        printf("popes element is %d ,index no : %d\n", stack[top], top);
        top = top - 1;
        //its my logic ,then (top equal) to (capacity half -1) then (capacity equal to half) 
        // int x = capacity / top+1;
        // printf(" capacity %d / %d top+1 = %d x\n",capacity,top+1 ,x);
        // if (x > 2)
        // {
        //     capacity=capacity/top+1;
        //     stack = (int *)realloc(stack, capacity * sizeof(int));
        //     printf("stack size half,new capacity %d \n", capacity);//memory optamizetion 

        // }
    }
}
void display()
{
    printf("the elements are printing .... \n");
    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
    printf("*****************************************\n");
}
int main()
{
    stack = (int *)malloc(capacity * sizeof(int));
    printf("implementation a stack using dynamic array\n");
    push(10);
    push(20);
    display();
    push(30);
    display();
    push(11);
    display();
    push(10);
    display();
    push(20);
    display();
    pop();
    display();
    pop();
    display();
    pop();
    display();
    pop();
      display();
      pop();
      display();
    free(stack);
}