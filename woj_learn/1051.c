#include<stdlib.h>
#include<stdio.h>
#define MAX 20000
int d[MAX];

int lowerbound(int d[],int s,int e,int q)
{
    int m;
    while(s<e)
    {
        m=s+(e-s)/2;
        if(d[m]>=q)
            e = m;
        else
            s = m+1;
    }
    return s;
}

int binary_search(int d[], int s, int e, int q)
{
    int tmp = lowerbound(d,s,e,q);
    //tmp--;
    return (tmp-s);
}

int main()
{
    int n;
    int m;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&d[i]);
    scanf("%d",&m);
    while(m--)
    {
        int s,e,q;
        scanf("%d %d %d",&s,&e,&q);
        //printf("%d %d %d\n",s,e-1,q);
        if(s>=e) printf("-1\n");
        else printf("%d\n",binary_search(d,s,e,q));
    }
}
