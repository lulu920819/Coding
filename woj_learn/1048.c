#include<stdio.h>
#define LEN 110
void output(char s[])
{
    int i;
    int z,o,j;
    i=z=o=j=0;
    while(s[i]!='\0')
    {
        switch(s[i])
        {
        case 'Z':
            z++;break;
        case 'O':
            o++;break;
        case 'J':
            j++;break;
        }
        i++;
    }
    while(!(z==0&&o==0&&j==0))
    {
        if(z>0)
            {printf("Z");z--;}
        if(o>0)
            {printf("O");o--;}
        if(j>0)
            {printf("J");j--;}
    }
    printf("\n");
}

int main()
{
    char s[LEN];
    gets(s);
    while(s[0]!='E')
    {
        output(s);
        gets(s);//×Ö·û´®
    }
}
