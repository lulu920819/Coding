#include<iostream>
#include<iomanip>
#include<stdio.h>
#define A 0.393700787
#define B 0.032808399
using namespace std;
int main()
{
float a;
cin>>a;

//cout<<setprecision(4)<<a*A<<" ";
//cout<<setprecision(4)<<a*B;
printf("%.4f %.4f",a*A,a*B);
return 0;
}
