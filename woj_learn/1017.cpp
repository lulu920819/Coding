
#include<stdlib.h>
#include<stdio.h>

int main()
{
int i,n;
double sum=0.0;
int plus = 1;
scanf("%d",&n);
for(i = 1;i<=n;i++)
{
    plus =plus *(2*i-1)*2*i;
    sum += (double)1/(plus);
}
printf("%.6f",sum);
}
