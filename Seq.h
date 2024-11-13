#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

typedef int Elemtype;

typedef struct SeqStack
{
    Elemtype* base;
    int top;
    int Capity;
}SeqStack;

void InitStack(SeqStack* Stack,int num);

void PushStack(SeqStack* Stack,int data);

bool isempty(SeqStack* Stack);

bool isfull(SeqStack* Stack);

void ShowStack(SeqStack* Stack);

Elemtype PopStack(SeqStack* Stack);

