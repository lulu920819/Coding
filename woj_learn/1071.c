#include<stdio.h>
#define LEN 220
void output(char *s)
{
    int i=0;
    while(s[i]!='\n')
    {
        printf("%c",s[i++]);
    }
    printf("\n");
}
void getnchar(char *str, int n)
{
    int i=0;
    char t;
    while(i<LEN&&(t=getchar())!='\n')
    {
        str[i]=t;
        i++;
    }
    str[i] = '\n';
    str[++i] = '\0';
}

int my_strlen(char *str)
{
    int i,count;
    i=count=0;
    while(str[i]!='\n')
    {
        count++;
        i++;
    }
    return count;
}

int my_strncat(char *dest, char *src, int n)
{
    int len_src = my_strlen(src);
    int len_dest = my_strlen(dest);
    int copy_num =(len_src<n?len_src:n) ;
    int i ,j;
    i = 0;j = len_dest;
    while(i<copy_num)
    {
        dest[j]=src[i];
        i++;
        j++;
    }
    dest[j]='\n';
    dest[++j] = '\0';
    return copy_num;
}

 int my_strspn(char *str, char *keys)
 {
    int i;
    int max;
    i=max = 0;
    while(keys[i]!='\n')
    {
        if(keys[i]==str[0])
        {
            int k = i+1;
            int j=1;
            while(str[j]!='\n')
            {
                if(keys[k]==str[j])
                {
                    j++;
                    k++;
                }
                else
                    break;
            }
            max = (j>max)?j:max;
        }
        i++;
    }
//    return (max+1==my_strlen(str))?max:(max-1);
    return  (max+1==my_strlen(str))?my_strlen(str):(max);
 }

int main()
{
    int ncase;
    char nol[2];
    scanf("%d",&ncase);
    getchar();//处理int 后的回车
    while(ncase--)
    {
        char a[LEN],b[LEN],c[LEN];
        int x;
        getnchar(a,LEN-2);
//        printf("a:");output(a);
        getnchar(b,LEN-2);
//        printf("b:");output(b);
        getnchar(c,LEN-2);
//        printf("c:");output(c);
        scanf("%d",&x);
//        printf("x:%d\n",x);
        getchar();//处理int 后的回车

        printf("%d\n",my_strlen(a));
        printf("%d ",my_strncat(a,b,x));
        output(a);
        printf("%d\n",my_strspn(b, c));
    }
}
