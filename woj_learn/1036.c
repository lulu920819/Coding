#include<stdlib.h>
#include<stdio.h>


int substitute(char str[], char oldchar, char newchar)
{
    int i = 0;
    char *p = str;
    while(*p !='\0')
    {
        if(*p == oldchar)
        {
            *p = newchar;
            i++;
        }
        p++;
    }
    return i;
}

int main()
{
    char str[1001];
    char oldchar;
    char newchar;
    //scanf("%s",&str);
    //printf("str::%s\n",str);
    while (scanf("%s %c %c", str, &oldchar, &newchar) == 3)
    //读入要学习，注意
    {
        int sub;
        //scanf(" %c %c",&oldchar,&newchar);
        //printf("%c %c\n",oldchar,newchar);
        sub = substitute(str,oldchar,newchar);

        printf("%d %s\n",sub,str);
    }

    return 0;
}
