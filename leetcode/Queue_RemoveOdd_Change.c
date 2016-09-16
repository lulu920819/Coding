/*
���ܣ�
    ɾ�������е�����Ԫ��
˼·��
    �������Ƚ��ȳ���ǰ��ɾ�����������ˣ�������
    ���Ǿʹ�ǰ�濪ʼ��ɾ����ż���Ļ��Ͳ嵽��β�������Ͳ��ܿ�
    ���������أ�����ԭ���Ķ�β��ɾ���˰�
*/

// ���Ҫ�����Ӻ���
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

// ��ӡ����
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
// ����
void enQueue(int val, QList *q)
{
    QNode *s;
    s = (QNode *)malloc(sizeof(QNode));
    s->data = val;
    s->next = NULL;
    if(q->rear ==NULL) //����Ϊ�գ��½ڵ��Ƕ���Ҳ�Ƕ�β
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
    if(q->rear == NULL)//��
    return 0;
    t = q->front;
    if(q->front == q -> rear) //һ���ڵ�
        q->front = q->rear = NULL;
    else
        q ->front = q->front->next; //����ڵ�
    //free(t);
    free();

}
// ��ʼ��
QList * init()
{
    QList * q = (QList *)malloc(sizeof(QList));
    q->front = q->rear = NULL;
    return q;
}

int deleteodd(QList *q)
{

        QNode * end;
       if(q->rear==NULL)//Ϊ�վͲ�������
            return 0;
        end = q->rear->next;  //û������ľ��ӣ���num = 0 ���д���Ϊr-rear-nextľ��ֵ��
        while(q->front!=end)
        {
            QNode * begin;
           begin = q->front;
            if( begin->data%2==0) //ż��
            {
               // deQueue(q);
              //  enQueue(data,q);

                  // ���������
                  if(q->front == q->rear) //����Ҫ����������Ҫ���ǲ��ǿգ����һ��Ԫ�أ��ͻ�ֱ������ѭ����
                    break;
                else
                {
                    q->front = q->front->next; //ͷ������
                    begin->next = NULL; //��ǰ�ڵ��أ���β�巨��������
                   q-> rear->next = begin; // βָ�����
                   q-> rear = begin;
                }
            }
            else
            {
                    QNode *t;
                    t = q->front;
                    if(q->front == q -> rear) //һ���ڵ�
                        q->front = q->rear = NULL;
                    else
                        q ->front = q->front->next; //����ڵ�
                    free(t);
                    //deQueue(q);
            }

        }
        return 0;
}

int main()
{
    int i;
    int n;
   // --------------��������ʼ
    printf("num:");
    scanf("%d",&n);

    QList *q = init();
    for(i = 0;i<n;i++)
    {
        int val;
        scanf("%d",&val);
        enQueue(val,q);
    }
    printf("ԭʼ��\n");
    show(q);
    //---------------��������


    // -------------ɾ�� ����һ������������   �Ұ����еĹ�����Ų��һ��������
    deleteodd(q);
    //-------------  ��ʾ
    show(q);

}
