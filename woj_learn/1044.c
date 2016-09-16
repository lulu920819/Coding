#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 16//10^9,10Î»+¶ººÅ+·ûºÅ+'\0'

int strtoint(char *s)
{
    int len = strlen(s);
    int num,i,index;

    num = 0;
    index = 0;
    for(i = len-1;i>0;i--)
    {
        if(s[i]!=',')
        {
            int tmp = (int)(pow(10,index)+0.5)*(s[i]-'0');
            //printf("%d:%d\n",index,tmp);
            num+=tmp;
            //printf("num:%d\n",num);
            index++;
        }
    }

    if(s[0]=='-')
        num = -num;
    else
    {
            int tmp = (int)(pow(10,index)+0.5)*(s[i]-'0');
            //printf("pow:%d\n",(int)pow(10,index));
            //printf("%d:%d\n",index,tmp);
            num+=tmp;
            //printf("num:%d\n",num);
           // index++;
    }

    //printf("s\t%s\nnum\t%d\n",s,num);
    return num;
}

int main()
{
    char s1[MAX];
    char s2[MAX];
    while(scanf("%s%s",s1,s2)==2)
    {
        printf("%d\n",strtoint(s1)+strtoint(s2));
    }

}
