#include<stdlib.h>
#include<stdio.h>

int strdiff(char *a, char *b)
{
    char* pa = a;
    char* pb = b;
    while((*pa)!='\0'&&(*pb)!='\0')
    {
        if((*pa!=*pb))
            return ((*pa)-(*pb));
        pa++;
        pb++;
    }
    if((*pa) == '\0')
        return -(*pb);
    if((*pb) == '\0')
        return (*pa);
}

int main()
{
    char a[1000],b[1000];
    while(scanf("%s %s",a,b)!=EOF)
    {
        printf("%d\n",strdiff(a,b));
    }
    return 0;
}
