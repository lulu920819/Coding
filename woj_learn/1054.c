#include<stdio.h>
int swap(int *a,int n)
{
    int i,j,num = 0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int tmp=a[i];
                a[i] = a[j];
                a[j]= tmp;
                num++;
            }
        }
    }
    return num;
}

int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        int a[n];
        int i;
        int num;
        for(i = 0;i<n;i++)
            scanf("%d",&a[i]);

        num = swap(a,n);
        printf("%d\n",num);
        scanf("%d",&n);
    }
    return 0;
}
