//#include<iostream>
#include<stdlib.h>
#include<stdio.h>
//using namespace std;
int main()
{
    float a,b;
//    cout<<"请输入价格："<<endl;
//    cin>>a;
//    cout<<"支付金额："<<endl;
//    cin>>b;
printf("请输入价格：\n");
scanf("%f",&a);
//scanf记得&，地址符号
printf("支付金额：\n");
scanf("%f",&b);
    printf("%.2f",b-a);
}
