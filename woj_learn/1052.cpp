#include<iostream>
#include<stdio.h>
#include<string.h>
 #include <algorithm>
using namespace std;

//k��ʾ��ǰѡȡ���ڼ�������m��ʾ���ж��ٸ���
void Permutation(char* pStr,int k,int m,int index)
{
//	assert(pStr);
//    printf("����%s\n",pStr);
	if(k == m)
	{
		static int num = 1;  //�ֲ���̬����������ͳ��ȫ���еĸ���
		printf("��%d������\t%s\n",num++,pStr);
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
//	printf("����%s\n",str);
	Permutation(str , 0 , strlen(str)-1,index);
	return 0;
}
//	char str[] = "abc";
//	Permutation(str,str);
//	return 0;
//}
