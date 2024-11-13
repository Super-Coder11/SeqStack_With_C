#include "Seq.h"

void InitStack(SeqStack* Stack,int num)
{
    Stack->base = (SeqStack* )malloc(sizeof(Elemtype) * num);
    Stack->top = 0;
    Stack->Capity = num;
}

bool isempty(SeqStack* Stack)
{
    if(Stack->top == 0)
        return true;
    else
        return false;
}

bool isfull(SeqStack* Stack)
{
    if(Stack->top == Stack->Capity)
        return true;
    else
        return false;
}

void PushStack(SeqStack* Stack,int data)
{
    if(isfull(Stack))
    {
        printf("Stack is full , can not Push the stack\n");
        return;
    }
    Stack->base[Stack->top++] = data;
}

void ShowStack(SeqStack* Stack)
{
    for (int i = 0; i < Stack->top; i++)
    {
        printf("%d\n",Stack->base[i]);
    }
}

Elemtype PopStack(SeqStack* Stack)
{
    if (isempty(Stack))
    {
        printf("Stack is empty,can not pop the elem\n");
        exit(-1);
    }
    else
    {
        return Stack->base[--Stack->top];
    }
    
}

