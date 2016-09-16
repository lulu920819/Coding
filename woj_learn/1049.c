#include<stdlib.h>
#include<stdio.h>

int reverse(int n)
{
    int i;

    if(!n) return;
    scanf("%d",&i);
    reverse(n-1);
    printf("%d ",i);
}


int main()
{
    int n;
    scanf("%d",&n);
    reverse(n);
}
