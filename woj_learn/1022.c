#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int data[20000];
double f(int x)
{
    return sqrt(6*x+2);
}

int main()
{
    double sum=0.0;

    int x;
    for(x = 0;x<=1000;x+=50)
    {
        double result = f(x);
        sum += result;
        printf("%.4f %.4f\n",result,sum);
    }

}
