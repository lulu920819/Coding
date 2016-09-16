#include<stdlib.h>
#include<stdio.h>

void insert(int a[],int tmp,int index)
{
    int i;
    int k=index;
    if(index = 0)
        a[0] = tmp;
    for(i = index-1;i>=0;i--)
    {
        if(tmp >= a[i])
            {a[k] = tmp;break;}
        else
            {a[k]=a[i];k--;}
    }
    if(i = 0)
        a[0] = tmp;
}

int main()
{
    int ncase;
    scanf("%d",&ncase);
    while(ncase--)
    {
        int num;
        int a[1000];
        int i;
        scanf("%d",&num);
        for(i = 0;i< num;i++)
        {
            int tmp;
            scanf("%d",&tmp);
            insert(a,tmp,i);
        }
        for(i = 0;i<num;i++)
            printf("%d ",a[i]);
        printf("\n");

    }
    return 0;
}
