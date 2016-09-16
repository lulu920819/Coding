//#include<iostream>
#include<stdlib.h>
#include<stdio.h>
//using namespace std;
int main()
{
int n;

scanf("%d",&n);
while(n--)
{
    int a,b,c;
    int max,min;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d ",a+b+c);
    printf("%.2f ",(float)(a+b+c)/3);
    printf("%d ",a*b*c);
    max = a>=b?a:b;
    max = max>=c?max:c;
    min = a<=b?a:b;
    min = min<=c?min:c;
    printf("%d %d\n",min,max);

}
}
