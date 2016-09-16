#include<stdio.h>
#include<stdlib.h>
//#include<stddef.h>

output(char* c,size_t i,int *m)
{
    unsigned char *p =(unsigned char *) m;
    size_t x;
    for(x=0;x<i;x++)
    {
      printf("%02X",*(p+x));
    }
    printf("\n");
}

int main()
{
    union
    {
        char byte16[4];
        char byte32[8];
    }byte;
    int m;
    size_t i = sizeof(int);
    //printf("i:%d",i);
    while(scanf("%d",&m)!=EOF)
    {

       // printf("i:%d\n",i);
        //printf("m:%x\n",m);
        if(i==2)
            output(byte.byte16,i,&m);
        if(i==4)
            output(byte.byte32,i,&m);
    }


    return;
}
