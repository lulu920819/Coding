#include<stdio.h>
#include<stdlib.h>
int data[20000];
int binary_search(int d[], int s, int e, int q)
{
    int ss =s,ee=e-1;
    while(ss<=ee)
    {
        int mid = (ss+ee)/2;
        if(d[mid]==q) return mid;
        else if(d[mid]>q)   ee = mid-1;
        else ss = mid+1;
    }
    return -1;
}

int main()
{
    int i,n;
    int m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&data[i]);
    scanf("%d",&m);
    while(m--)
    {
        int s,e,q;
        int reselt;
        scanf("%d %d %d",&s,&e,&q);
        printf("%d\n",binary_search(data,s,e,q));
    }
    return 0;
}
