#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;

void angle(int a,int b,int c)
{
    long int r1 = c*c;
    long int r2 = b*b+a*a;
    if(r1==r2)//Ö±½Ç
    {
        printf("right ");
        return;
    }
    if(r1>r2)//¶Û½Ç
    {
        printf("obtuse ");
        return;
    }
    if(r1<r2)//Èñ½Ç
    {
        printf("acute ");
        return;
    }

}

void side(int a,int b,int c)
{
    if(a==c)//µÈ±ß
    {
        printf("equilateral\n");
        return;
    }
    if(a==b||b==c)//µÈÑü
    {
        printf("isosceles\n");
        return;
    }
    printf("scalene\n");//²»µÈ±ß
    return;

}

int istri(int a,int b,int c)
{
    if(a+b<=c)
        return 1;//not a  triangle
    else return 0;
}

int main()
{
    int a[3];
    while(scanf("%d %d %d",&a[0],&a[1],&a[2])==3)
    {
        int a1,a2,a3;
        sort(a,a+3);
        a1= a[0];a2=a[1];a3=a[2];
        if(istri(a1,a2,a3)==1)
        {
           printf("not a triangle\n");
           continue;
        }

        angle(a1,a2,a3);
        side(a1,a2,a3);
    }
    return 0;
}

