#include<stdlib.h>
#include<stdio.h>
//char letter[26]={'A','B','C','D','E','F','G','H','I','J','K',}
int main()
{
    char str[100];
    long int length;
    while(scanf("%s %d",str,&length)!=EOF)
    {
        char *pstr = str;
        int i=1;
        while((*pstr)!='\0')
        {
            char s = (*pstr);
            int index = 'Z'-s;
            s = 'Z'-((i+length)%26+index)%26;
            printf("%c",s);
            i++;
            pstr++;
        }
        printf("\n");
    }

    return 0;
}
