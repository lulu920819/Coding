#include<stdio.h>
#include<stdlib.h>

typedef struct
{
   char name[33];
   long int birth;
   long int sno;
   char major[33];
}stinfo;

void print(stinfo std)
{
    printf("%s %08ld %08ld %s\n",std.name,std.birth,std.sno,std.major);
}

void seek(stinfo *st,long int sno)
{
    int i=0;
    for(i = 0;i<30;i++)
    {
        if(st[i].sno == sno)
        {
            print(st[i]);
            return;
        }

    }
    printf("Not found\n");
    return;
}
int main()
{
    int i = 0;
    int n;
    stinfo std[30];
    for(i = 0;i<30;i++)
    {
        scanf("%s %ld %ld %s",&std[i].name,&std[i].birth,&std[i].sno,&std[i].major);
        //print(std[i]);
    }
    scanf("%d",&n);
    while(n--)
    {
        long int sno;
        scanf("%ld",&sno);
        seek(std,sno);
    }
    return 0;
}
