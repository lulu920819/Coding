#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int isequal(int p,double a,double b)
{
    double delta = pow(10,-p);
    //printf("delta:%lf\n",delta);
    if(fabs(a-b)<=delta)
        return 0;
    else if((a-b)>0)
        return 1;
    else
        return -1;
}


int main()
{
    int p;
    double a,b;
    while(scanf("%d%lf%lf",&p,&a,&b)==3)
    {
        printf("%d\n",isequal(p,a,b));
    }
    return 0;
}
