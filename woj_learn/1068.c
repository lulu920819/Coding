#include<stdio.h>
#include<stdlib.h>
typedef struct lnode
{
    int val;
    struct lnode *next;
}list;

int num=0;
void add(list *head,int idx,int val)
{
    if(idx>num)
        return;
    else
    {
        list *p ,*q;
        int i=0;
        p=head;
        q=(list *)malloc(sizeof(list));
        q->val = val;
        //printf("op1:%d\n",q->val);
        q->next=NULL;
        while(i<idx)
        {
            i++;
            p=p->next;
        }

        q->next=p->next;
        p->next = q;
        num++;
        //printf("op1:%d",head->next->val);
        return;
    }




}

void change(list *head,int idx,int val)
{
    if(idx>num)
     return;
    else
    {
        list * p= head;
        int i=0;
        while(i<idx)
        {
            i++;
            p=p->next;
        }
        p->val = val;
    }

}

void print(list *h)
{
    list *p = h;
    int i;
    printf("Á´±í\n");
//    while(p->next!=NULL)
//    {
//        p=p->next;
//        printf("---%d:%d\n",i,p->val);
//        i++;
//    }
    p=h->next;
    for(i = 0;i<num;i++)
    {
        printf("%d\n",p->val);
        p=p->next;
    }
}
void ldelete(list *head,int idx)
{
    if(idx>num)
     return;
    else
    {
        list *p = head,*q;
        int i=0;
        while(i<idx-1)
        {
            i++;
            p=p->next;
        }
        q = p->next;
        p->next= q->next;
        free(q);
        num--;
    }

}

void search(list *head,int idx)
{
    if(idx>num)
     return;
    else
    {
        list *p = head;
        int i=0;
        while(i<idx)
        {
            i++;
            p=p->next;
        }
        printf("%d\n",p->val);
    }
}

int main()
{
    int op,idx,val;
    list *h;
    h=(list *)malloc(sizeof(list));
    h->next=NULL;
    while(scanf("%d %d %d",&op,&idx,&val)!=EOF)
    {
        switch(op)
        {
            case 1:
                add(h,idx,val);

                break;
            case 2:
                change(h,idx,val);
                break;
            case 3:
                ldelete(h,idx);
                //num--;
                break;
            case 4:
                search(h,idx);
                break;
            default:
                break;
        }
        //print(h);

    }

    return 0;
}
