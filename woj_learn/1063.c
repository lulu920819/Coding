#include<stdlib.h>
#include<stdio.h>
#define MAX 1000
char *findstr(char *s, char *t)
{
    char *ps,*pt;
    ps = s;pt=t;
    while((*ps)!='\0')
    {
        //printf("%c %c",*ps,*pt);
        if((*ps)==(*pt))
        {
            char * ps2,*pt2;
            ps2 = ps+1;
            pt2 = pt+1;
            while((*pt2)!='\0')
            {
                if(*ps2 == *pt2)
                {
                    ps2++;
                    pt2++;
                }
                else
                break;
            }
            if(*pt2=='\0')
                return ps;
        }
        ps++;
    }
    if((*ps) == '\0')
        return NULL;
}

int main()
{
    char *s,*t;
    s = (char *)malloc(sizeof(char)*MAX);
    t = (char *)malloc(sizeof(char)*MAX);
    while(scanf("%s %s",s,t)==2)
    {
        //printf("s:%s t:%s\n",s,t);
        char * p = findstr(s,t);
        printf("0x%06x 0x%06x\n",s,p);
    }
    return 0;
}
