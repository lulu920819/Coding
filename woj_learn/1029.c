#include<stdlib.h>
#include<stdio.h>


int main()
{
    double e=1.0,x = 1.0;
    double result=1.0;
    int i=1;

    while(x>=1e-15)
    {
        result*=i;
        x = (double)1.0/result;
        e+=x;
        i++;
    }
    printf("%.14f",e);


    return 0;
}
