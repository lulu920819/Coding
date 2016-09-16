#include<iostream>
#include<iomanip>
#include<stdio.h>
#define PI 3.1415926

using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        double a;
        cin>>a;
        printf("%.4f %.4f %.4f\n",a*2,a*2*PI,PI*a*a);
    }

return 0;
}
