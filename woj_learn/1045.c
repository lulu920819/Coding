
#include<stdlib.h>
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        int a[n];
        int i;
        int score,total=0;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&score);
        for(i=0;i<n;i++)
        {
            if(a[i]==score)
                total++;
        }
        printf("%d\n",total);
        scanf("%d",&n);
    }

}
