#include<stdio.h>
typedef struct
{
    float x;
    float y;
}POINT;

typedef struct
{
    float m;
    float n;
    float r;
}CIRCLE;

int in_circle(POINT p,CIRCLE c)
{
    float dis = (p.x-c.m)*(p.x-c.m)+(p.y-c.n)*(p.y-c.n);
    float rr  = c.r*c.r;
    if(dis == rr) return 1;
    if(dis > rr) return 0;
    if(dis < rr) return 2;
}

int main()
{
    POINT p;
    CIRCLE c;
    while(scanf("%f %f %f %f %f",&p.x,&p.y,&c.m,&c.n,&c.r)!=EOF)
    {
        printf("%d\n",in_circle(p,c));
    }
}
