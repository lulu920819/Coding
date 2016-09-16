#include<stdio.h>
#include<math.h>
void solution(int a,int b,int c,int cases)
{
    if(0==a)
    {
        if(0==b)
        {
            printf("Case %d: NULL\n",cases);
            return;
        }

        else
        {
//            float tmp  = (float)c/b;
            printf("Case %d: %.2f\n",cases, (float)-c/b);
            return;
        }
    }
    else
    {
        int delta = b*b-4*a*c;
        if(delta < 0)
        {
            printf("Case %d: NULL\n",cases);
            return;
        }
        if(delta == 0)
        {
            float tmp = -(float)b/a/2;
            printf("Case %d: %.2f\n",cases, tmp);
            return;
        }
        if(delta>0)
        {
            double x1 = (-b+sqrt(delta))/2/a;
            double x2 = (-b-sqrt(delta))/2/a;
            printf("Case %d: %.2f %.2f\n",cases,x1<x2?x1:x2,x1>x2?x1:x2);
            return;
        }

    }

}

int main()
{
    int i,ncase;
    scanf("%d",&ncase);
    for(i=0;i<ncase;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        solution(a,b,c,i+1);
    }
}
