#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int time_elapse(int hour, int minute, int second)
{
    return (second+60*minute+60*60*hour);
}

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int h1,m1,s1,h2,m2,s2;
        int l1,l2;
        scanf("%d: %d: %d %d: %d: %d",&h1,&m1,&s1,&h2,&m2,&s2);

        l1 = time_elapse(h1,m1,s1);
        l2 = time_elapse(h2,m2,s2);
        printf("%d %d %d\n",l1,l2,l1<l2?(l2-l1):(l1-l2));
    }
    return 0;
}
