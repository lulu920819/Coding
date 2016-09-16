#include<stdio.h>
void print(int * a)
{
    printf("%d",a[2]);
}

int main()
{
    int offet = 2;
    int a[7]={0,1,2,3,4,5,6};
    print(a+offet);
}
