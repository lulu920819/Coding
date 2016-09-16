
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int bj,lv,ts;
    char bfh;
    scanf("%d",&bj);
    while(bj!=(-1))
    {
        scanf("%d%c %d",&lv,&bfh,&ts);
        float lx;
        lx =(float) bj*lv*ts/365/100;

        printf("%.2f\n",lx);
        scanf("%d",&bj);
    }
    return 0;
}
