#include<stdlib.h>
#include<stdio.h>
int a[1000] = {0};
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int i,x=0,r,j;
        scanf("%d",&i);
        if(i == 0) printf("0\n");
        else
        {
            while(i)
            {
                r = i%7;
                a[x] = r;
                x++;
                i = i/7;
            }
            for(j=x-1;j>=0;j--)
            {
                printf("%d",a[j]);
            }
            printf("\n");
        }

    }
}
