#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int max,min,count=0;
    scanf("%d",&n);
    //count++;
    max = n; min = n;
    while(n!=-1)
    {
        if(n>max)
            max = n;
        if(n<min)
            min = n;
        count++;
        scanf("%d",&n);
    }
    printf("%d %d %d",count,max,min);
    return 0;
}
