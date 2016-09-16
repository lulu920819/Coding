#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int flip()
{
    int x;
    int i;
    int up =0,down = 0;
    srand((unsigned) time(NULL));
    for(i = 0;i<100;i++)
    {

        x = rand()%2;
        if(x==0)
        {
            printf("1 ");
            up++;
        }
        else
        {
            printf("0 ");
            down++;
        }
    }
    printf("\n%d %d",up,down);
    return 0;
}

int main()
{
    flip();
    return 0;
}
