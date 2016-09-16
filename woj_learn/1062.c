#include<stdio.h>
#include<stdlib.h>
#define MAX 1001
int substitute(char *str, char oldchar, char newchar)
{
    char *sp = str;
    int replace=0;
    while((*sp)!='\0')
    {
        //printf("sp:%c\n",*sp);
        if((*sp)==oldchar)
        {
            //printf("%c",newchar);
            (*sp) = newchar;
            replace++;
        }
        sp++;
    }
    return replace;
}

int main()
{
    char *str;
    char oldchar, newchar;
    str = (char *)malloc(sizeof(char)*MAX);

    while(scanf("%s %c %c",str,&oldchar,&newchar)!=EOF)
    {
        int count = substitute(str,oldchar,newchar);
        printf("%d %s\n",count,str);
    }

    return 0;
}
