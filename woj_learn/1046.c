#include<stdio.h>
#include<string.h>
#define LEN_T 1010
#define LEN_STR 1010
void countstr(char str[],char t[])
{
//    int len_t = strlen(t);
//    int len_str = strlen(str);
    int i=0;
//    printf("str:%s %d\n",str,len_str);
//    printf("t:%s %d\n",t,len_t);
    while(t[i]!='\n')
    {
        int j = 0;
        int count = 0;
        while(str[j]!='\n')
        {
            if(str[j]==t[i])
            {
                count++;
            }

            j++;
        }
        printf("%c %d\n",t[i],count);
        i++;
    }

}

int main()
{
    char t[LEN_T];
    char str[LEN_STR];
    fgets(t,LEN_T,stdin);
    while(t[0]!='#')
    {
        fgets(str,LEN_STR,stdin);
        countstr(str,t);
        fgets(t,LEN_T,stdin);
    }
}
