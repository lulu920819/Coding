#include<stdio.h>
void chicken(int n)
{
    int i,j,k;
    for(i=0;i<100;i++)
    {
        for(j=0;j<100-i;j++)
        {
            int k = 100-i-j;
            float left = 5*i + 3*j +(float)1.0/3*k-n;
            if(left<=0.0)
                printf("x=%d,y=%d,z=%d\n",i,j,k);
            else
                break;
        }
    }
}


int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        chicken(n);
    }
}
