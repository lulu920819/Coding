#include<stdio.h>

int print(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        int j;
        for(j=0;j<2*(n-i);j++)
            printf(" ");

        for(j=0;j<(4*i+1);j++)
            printf("*");

        printf("\n");
    }

    for(i = 0;i<(4*n+1);i++)
    printf("*");
    printf("\n");

    for(i=n-1;i>=0;i--)
    {
        int j;
        for(j = 0;j<2*(n-i);j++)
        printf(" ");

        for(j=0;j<4*i+1;j++)
        printf("*");

        printf("\n");
    }

}
 int main()
 {
     int n;
     while(scanf("%d",&n)!=EOF)
     {
         print(n);
     }
 }
