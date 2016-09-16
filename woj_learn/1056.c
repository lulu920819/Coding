#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000
void add(char s1[],char s2[])
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int lens= (len1>len2)?(len1+1):(len2+1);
    //char sum[lens] = {0};
    int i,j,k,l;
    int c = 0;
    char *sum = (char *)malloc(sizeof(char)*lens);
    //i = len1-1,j = len2-1,k=lens-1
    i = len1-1;j = len2-1;k=lens-1;

    for(;i>=0&&j>=0;)
    {
        int res = s1[i]-'0'+s2[j]-'0'+c;
       // printf("%d",s1[i]-'0'+s2[j]-'0'+c);
        if(res>9)
        {
            sum[k] = (res)%10+'0';
            c=1;
        }
        else
        {
            sum[k] = res+'0';
            c=0;
        }
//        printf("%d:%c\n",k,sum[k]);
    i--;j--;k--;
    }
    //printf("i:%d\nj:%d\nk:%d\n",i,j,k);
   if(i>=0)
   {
       //j = i,l =k
       j = i;l =k;
       for(;j>=0;j--,l--)
        {
            int res = s1[j]-'0'+c;
            if(res>9)
            {
                sum[l] = (res)%10+'0';
                c=1;
            }
            else
            {
              sum[l] = res+'0';
              c=0;
            }
//printf("%d:%c\n",l,sum[l]);
        }
   }
   if(j>=0)
   {
       //i = j, l=k
       i = j; l=k;
        for(;i>=0;i--,l--)
        {
            int res = s2[i]-'0'+c;
            if(res>9)
            {
                sum[l] = (res)%10+'0';
                c=1;
            }
            else
            {
                   sum[l] = res+'0';
                   c=0;
            }
//printf("%d:%c\n",l,sum[l]);
        }
   }

//   if(c==0)
//   {
//       for(i = lens-1;i>0;i--)
//        printf("%d:%c\n",i,sum[i]);
//        printf("\n");
//   }
//   else
//   {
//       for(i = lens-1;i>0;i--)
//         printf("%d:%c\n",i,sum[i]);
//        printf("1\n");
//   }
   if(c==0)
   {
       for(i = 1;i<lens;i++)
        printf("%c",sum[i]);
        printf("\n");
   }
   else
   {
       printf("1");
       for(i = 1;i<lens;i++)
         printf("%c",sum[i]);
 printf("\n");
   }
   free(sum);
}

int main()
{
    int ncase;
    scanf("%d",&ncase);
    while(ncase--)
    {
        char s1[MAX] = {0};
        char s2[MAX] = {0};
        scanf("%s%s",s1,s2);
        add(s1,s2);
    }

}
