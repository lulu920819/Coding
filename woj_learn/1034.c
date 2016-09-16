#include<stdio.h>
#include<stdlib.h>

char ji[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

int main()
{

    int n;
    scanf("%d",&n);
    while(n--)
    {
        char tran[32] = {0};
        long int a;
        int b;
        int i=0,j;
        scanf("%ld %d",&a,&b);
        if(a==0)
            printf("0\n");
        else
        {
            while(a)
            {
                tran[i] = ji[a%b];
                i++;
                a = a/b;
            }
            for(j=i-1;j>=0;j--)
            {
                printf("%c",tran[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
