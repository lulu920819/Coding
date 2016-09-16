
#include<stdlib.h>
#include<stdio.h>

int main()
{
int n;
double sum=0.0;
int plus = 1;
scanf("%d",&n);
while(n--)
{
    int a,b;
    scanf("%d %d",&a,&b);
    float price;
    switch(a)
    {
        case 1:price = 2.98;break;
        case 2:price = 4.50;break;
        case 3:price = 9.98;break;
        case 4:price = 4.49;break;
        case 5:price = 6.87;break;
    }
    sum += price*b;
}
printf("%.2f",sum);
return 0;
}
