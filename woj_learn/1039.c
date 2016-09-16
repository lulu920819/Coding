#include<stdio.h>
#include<string.h>
#define NKEYS 10
#define LEN_KEYS 15
#define LEN_STR 1001
int findchar(char str[],char t[])
{
    int len_str = strlen(str);
    int len_t = strlen(t);
    int i,j;
    int count = 0;
    i = 0;
//    printf("%s  %s\n",str,t);
//    printf("%d %d \n",len_str,len_t);
    while(i<=(len_str-len_t))
    {
//        printf("%c %c\n",str[i],t[0]);
//        printf("i: %d\n",i);
        if(str[i]!=t[0])
            i++;
        else
        {
            int k ;
            int same = 1;
            for(k=i+1,j=1;j<len_t;j++,k++)
            {
                if(str[k]!=t[j])
                {
                    same = 0;
                    break;
                }

            }
            if(same ==1)
            {
                count++;
                i+=len_t;
            }
            else
                i++;
        }
    }
    printf("%d\n",count);
}


int main()
{
    char keys[NKEYS][LEN_KEYS] ;
    char str[LEN_STR];
    int i,n;
    scanf("%d",&n);
    //printf("%d\n",n);
    gets(str);//Çå³ý»Ø³µ
    for(i = 0;i<n;i++)
    {
        gets(keys[i]);
        //printf("%s\n",keys[i]);
    }
    gets(str);
    //printf("%s\n",str);
    for(i = 0;i<n;i++)
        findchar(str,keys[i]);
}
