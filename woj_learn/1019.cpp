
#include<stdlib.h>
#include<stdio.h>

int main()
{
int n;
int sum=1;
scanf("%d",&n);
while(n--)
{
sum*=2;
}

printf("%d",sum*3/2-2);
return 0;
}
