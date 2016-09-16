#include<stdlib.h>
#include<stdio.h>

typedef struct queue
{
        int queuesize;   //数组的大小
        int front, rear;  //队列的头和尾下标
        int *data;          //数组头指针
}Queue;

void qpush(Queue **q,int id)
{
    int rear = ((*q)->rear+1)%(*q)->queuesize;
    if(rear == (*q)->front)
        return;
    (*q)->rear =rear;
    (*q)->data[rear] = id;
}

void qpop(Queue **q)
{
    if((*q)->rear == (*q)->front)
        return;
    (*q)->front = ((*q)->front+1)%(*q)->queuesize;

}

void initqueue(Queue **q,int size)
{
    *q = (Queue *)malloc(sizeof(Queue));

    (*q)->queuesize = size+1;
    (*q)->data = (int *)malloc(sizeof(int)*(size+1));
    (*q)->front = (*q)->rear = 0;
}

void freeq(Queue **q)
{
    free((*q)->data);
    free(*q);
}

void print(Queue *q)
{
    int front = q->front;
    int rear = q->rear;
    if(front == rear)
    {
        printf("NULL\n");
        return;
    }
    while(front != rear)
    {

        front=(front+1)%q->queuesize;
        printf("%d ",q->data[front]);
    }
    printf("\n");
}

void printff(Queue *q)
{
    printf("f:%d r:%d\n",q->front,q->rear);
    printf("df: %d  dr:%d\n",q->data[q->front+1],q->data[q->rear]);
}

int main()
{
    int N,M;
    while(scanf("%d %d",&N,&M)!=EOF)
    {
        Queue *q;
        int i;
        initqueue(&q,N);

        for(i=0;i<M;i++)
        {
            int op,id;
            scanf("%d %d",&op,&id);
            if(op==1)
                qpush(&q,id);
            if(op==2)
                qpop(&q);
      //          printff(q);
        }
        print(q);
        freeq(&q);
    }
    return;
}
