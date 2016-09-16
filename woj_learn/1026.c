#include<stdlib.h>
#include<stdio.h>
//int fibonacci(int n)
//{
//    if(n==0) return 1;
//    else if(n==1) return 1;
//    else return (fibonacci(n-1)+fibonacci(n-2));
//}
//int f[41] = {0};
//void compute(int n)
//{
//    if(n==0) f[0]=1;
//    if(n==1) f[1]=1;
//    if(f[n-1]==0)
//    {
//        compute(n-1);
//    }
//    else if(f[n-2]==0)
//    {
//        compute(n-2);
//    }
//    else
//    {
//        f[n] = f[n-1]+f[n-2];
//    }
//
//}
//
//int fibonacci(int n)
//{
//    compute(n);
//    return f[n];
//}
int fibonacci(int n)
{
    int temp[2],i;
    temp[0] = 1;
    temp[1] = 1;

    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        for ( i = 1; i < n; i ++)
        {
            int tp = temp[0] + temp[1];
            temp[1] = temp[0];
            temp[0] = tp;
        }
        return temp[0];
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int x;
        scanf("%d",&x);

        printf("%d\n",fibonacci(x));
    }
    return 0;
}


