#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
    int *ids;
    int top;
    int size;
}Stack;

void initstack(Stack **s,int n)
{
    (*s) = (Stack *)malloc(sizeof(Stack));
    (*s)->ids = (int *)malloc(sizeof(int)*n);
    (*s)->size = n-1;
    (*s)->top = -1;
}

void freeStack(Stack **s)
{
    free((*s)->ids);
    free(*s);
}

void push(Stack *s,int id)
{
    if(s->top == s->size)
        return;
    (s->top)++;
    s->ids[s->top] = id;
}

void pop(Stack *s)
{
   if(s->top==-1)
        return;
    (s->top)--;
}

void output(Stack *s)
{
    int top = s->top;
    if(top==-1)
    {
          printf("NULL\n");
          return;
    }

    while(top!=-1)
    {
        printf("%d ",s->ids[top]);
        top--;
    }
    printf("\n");
}

int main()
{
    int m,n;
    while(scanf("%d %d",&n,&m)==2)
    {
        //初始化栈
        Stack * s;
        initstack(&s,n);
        while(m--)
        {
            int op,id;
            scanf("%d %d",&op,&id);
            if(op==1)
                //入栈
                push(s,id);
            if(op==2)
                //出栈
                pop(s);
        }
        //输出
        output(s);
        //释放
        freeStack(&s);
    }
}
