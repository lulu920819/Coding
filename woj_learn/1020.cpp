#include<stdio.h>
#include<stdlib.h>
#define LEFT(x) (2*x*x*x - 4*x*x + 3*x -6)
#define START -9
#define END 9
void root(int y)
{
    int start = START;
    int end = END;
    while(start<= end)
    {
        int mid = (start+end)/2;
        int res = LEFT(mid);
        if(res==y)
        {
            printf("%d\n",mid);
            return;
        }

        else if(res>y)
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
//    if(start == end)
        printf("NULL\n");
    return;
}

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int y;
        scanf("%d",&y);
        root(y);
    }


    return 0;
}
