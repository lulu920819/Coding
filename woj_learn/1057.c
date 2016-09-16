
#include<stdio.h>
#include<stdlib.h>

#define START -10000.0
#define END 10000.0
#define E 0.00001
#define E1 1
double f(double x,int y)
{
    return (2*x*x*x - 4*x*x + 3*x -6-y);
}
void root(int y)
{
    double start =START;
    double end =END;
    double mid;
    if(f(start-1,y)>0||f(end-1,y)<0)
    {
        printf("NULL\n");
        return;
    }
    while(end-start>=E)
    {
        mid = (start+end)/2;
        //printf("mid:%f\n",mid);
        double res = f(start,y)*f(mid,y);
        if(res==0)
        {
            printf("%.4f\n",mid);
            return;
        }

        else if(res<0)
        {
            end = mid;
        }
        else
        {
            start = mid;
        }
    }
    printf("%.4f\n",mid);
    return;
}

int main()
{

        int y;
        while(scanf("%d",&y)!=EOF)
        {
            root(y);
        }

    return 0;
}
