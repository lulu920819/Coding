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
int s,g;
scanf("%d",&s);
if(s<0||s>100)
{printf("X\n");continue;}
g = s/10;

switch(g)
{
    case 0:case 1:case 2:case 3:case 4:case 5:
        printf("E\n");break;
    case 6:
        printf("D\n");break;
    case 7:
        printf("C\n");break;
    case 8:
        printf("B\n");break;
    case 9:case 10:
        printf("A\n");break;
}

}
}
