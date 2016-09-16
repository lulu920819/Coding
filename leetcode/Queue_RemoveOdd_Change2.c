/*
功能：
    删除队列中的奇数元素
思路：
    队列是先进先出，前面删除后面插入的了，所以呢
    我们就从前面开始，删除，偶数的话就插到队尾，奇数就不管咯
    结束条件呢，就是原来的队尾都删除了吧
*/

// 如果要用链队好了
#include<stdlib.h>
#include<stdio.h>

typedef struct qnode
{
    int data;
    struct qnode *next;
} QNode;

typedef struct
{
        QNode *front;
        QNode *rear;
} QList;

// 打印队列
void show(QList *q)
{
    QNode * head = q->front;
    if(q->rear == NULL)
    {
        printf("NULL\n");

    }
    else{
        while(head!=q->rear->next)
        {
            printf("%d ", head->data);
            head = head->next;
        }
        printf("\n");
    }

}
// 进队
void enQueue(int val, QList *q)
{
    QNode *s;
    s = (QNode *)malloc(sizeof(QNode));
    s->data = val;
    s->next = NULL;
    if(q->rear ==NULL) //链队为空，新节点是对首也是队尾
        q->front = q -> rear = s;
    else
    {
        q->rear ->next = s;
        q->rear = s;
    }
}

int deQueue(QList *q)
{
    QNode *t;
    if(q->rear == NULL)//空
    return 0;
    t = q->front;
    if(q->front == q -> rear) //一个节点
        q->front = q->rear = NULL;
    else
        q ->front = q->front->next; //多个节点
    free(t);
     return 0;

}
// 初始化
QList * init()
{
    QList * q = (QList *)malloc(sizeof(QList));
    q->front = q->rear = NULL;
    return q;
}

int deleteodd(QList *q)
{
         QNode * begin;
        QNode * end = q->rear;
        if(q->rear==NULL)//为空就不处理了
            return 0;
        begin = q->front;
        end = q->rear->next;
        while(begin!=end)
        {
           // int data = begin->data;
           begin = q->front;
           int flag = begin->data %2;  // 0:偶数  1 奇数
           if(q->front == q->rear)  // 一个节点
           {
               if(flag == 0)
                    break;
                else
                {
                    QNode *t = q->front;
                     q->front = q->rear = NULL;//多个节点
                    free(t);
                }
           }
           else
           {
               q->front = q->front->next; //头往后移
               if(flag == 0)
               {
                   begin->next = NULL; //当前节点呢，就尾插法插入链表
                   q-> rear->next = begin; // 尾指针后移
                   q-> rear = begin;
               }
               else
               {
                    QNode *t = q->front;
                      q ->front = q->front->next; //多个节点
                    free(t);
               }
           }
        }

    return 0;
}

int main()
{
    int i;
    int n;
   // --------------创建链表开始
    printf("num:");
    scanf("%d",&n);

    QList *q = init();
    for(i = 0;i<n;i++)
    {
        int val;
        scanf("%d",&val);
        enQueue(val,q);
    }
    printf("原始的\n");
    show(q);
    //---------------创建结束


    // -------------删除 看着一个函数就行了   我把所有的功能能挪到一个函数了
    deleteodd(q);
    //-------------  显示
    show(q);
     return 0;
}
