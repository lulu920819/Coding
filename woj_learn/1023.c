#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double distance(double x1, double y1, double x2, double y2)
{
    double x = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    //printf("x:%lf\n",x);
    return sqrt(x);
}

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        double x1,y1,x2,y2;
        //double类型要用lf输入
        scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);

        printf("%.4f\n",distance(x1,y1,x2,y2));
    }

}
