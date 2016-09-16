#include<stdlib.h>
#include<stdio.h>

int main()
{
    int m,n;
    scanf("%d",&m);
    while(m!=0)
    {
        scanf("%d",&n);
        int a[m][n];
        int b[m][n];
        int c[m][n];
        int i,j;
        int zero = 0;

        for(i=0;i<m;i++)
        {

            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        for(i=0;i<m;i++)
        {
            int flag = 1;
            for(j=0;j<n;j++)
            {
                scanf("%d",&b[i][j]);
                c[i][j]=a[i][j]+b[i][j];
               // printf("%d %d:%d\n",i,j,c[i][j]);
                if(c[i][j]!=0)
                {
                   flag = 0;
                }

            }
            zero+=flag;
        }
        for(j=0;j<n;j++)
        {
            int flag = 1;
            for(i=0;i<m;i++)
            {
                if(c[i][j]!=0)
                    flag = 0;
            }
            zero+=flag;
        }
        printf("%d\n",zero);
        scanf("%d",&m);
    }
}
