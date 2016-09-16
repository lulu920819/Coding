#include<stdio.h>

int findx(int d[], int n, int x)
{
   int i;
   for(i = 0;i<n;i++)
   {
       if(d[i]==x)
       return i;
   }
   return -1;
}

int main()
{
    int n,x,i;
    int d[100];
    scanf("%d",&n);
    for(i = 0;i<n;i++)
        scanf("%d",&d[i]);
    scanf("%d",&x);
    printf("%d\n",findx(d,n,x));

}
