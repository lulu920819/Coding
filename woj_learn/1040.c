#include<stdlib.h>
#include<stdio.h>

int findmin(int a[],int n)
{
    int min;
    if(n==0) return a[0];
    else
    {
        min= findmin(a,n-1);
        if(min>a[n]) return a[n];
        else return min;
    }

}


int main()
{
    int i,n;
    int a[100];
    int m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   m = findmin(a,n-1);
    printf("%d\n",m);
}
