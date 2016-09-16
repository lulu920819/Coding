#include<iostream>
#include<stdio.h>
#include<string.h>
 #include <algorithm>
using namespace std;

//k表示当前选取到第几个数，m表示共有多少个数
void Permutation(char* pStr,int k,int m,int index)
{
//	assert(pStr);
//    printf("传入%s\n",pStr);
	if(k == m)
	{
		static int num = 1;  //局部静态变量，用来统计全排列的个数
		printf("第%d个排列\t%s\n",num++,pStr);
		static int n = -1;
		n++;
		if(n == index)
            printf("%s\n",pStr);
	}
	else
	{
		for(int i = k; i <= m; i++)
		{
			swap(*(pStr+k),*(pStr+i));
			Permutation(pStr, k + 1 , m,index);
			swap(*(pStr+k),*(pStr+i));
		}
	}
}

int main(void)
{
	//char str[] = "abc";
	char str[11];
	int index;
	scanf("%s %d",str,&index);
	sort(str,str+strlen(str));
//	printf("排序%s\n",str);
	Permutation(str , 0 , strlen(str)-1,index);
	return 0;
}
//	char str[] = "abc";
//	Permutation(str,str);
//	return 0;
//}
