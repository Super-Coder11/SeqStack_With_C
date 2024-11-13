#include"Seq.h"



int main()
{
    struct SeqStack myStack;
    InitStack(&myStack,10);
    for(int i = 0;i < 10;i++)
    {
        PushStack(&myStack,i);
    }
    ShowStack(&myStack);
    for (int i = 0; i < 11; i++)
    {
        printf("%d\n", PopStack(&myStack));
    }
    return 0;
}