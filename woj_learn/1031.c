#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n!=(-1))
    {
        int f = n*0.09+0.5;
        printf("%d\n",f+200);
        scanf("%d",&n);
    }
    return 0;
}
