#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#include<assert.h>

//��ת����
void Reverse(char* pBegin , char* pEnd)
{
	while(pBegin < pEnd)
		swap(*pBegin++ , *pEnd--);
}
//��һ������
bool Next_permutation(char a[])
{
	assert(a);
	char *p , *q , *pFind;
	char *pEnd = a + strlen(a) - 1;
	if(a == pEnd)
		return false;
	p = pEnd;
	while(p != a)
	{
		q = p;
		p--;
		if(*p < *q)  //�ҽ��������2��,ǰһ�������滻��
		{
			 //�Ӻ���ǰ�ұ��滻���ĵ�һ����
			pFind = pEnd;
			while(*pFind < *p)
				--pFind;
			swap(*p , *pFind);
			//�滻������ȫ����ת
			Reverse(q , pEnd);
			return true;
		}
	}
	Reverse(a , pEnd);   //���û����һ������,ȫ����ת�󷵻�false
	return false;
}

int cmp(const void *a,const void *b)
{
	return int(*(char *)a - *(char *)b);
}
int main(void)
{
	char str[] = "bac";
	int num = 1;
	qsort(str , strlen(str),sizeof(char),cmp);
	do
	{
		printf("��%d������\t%s\n",num++,str);
	}while(Next_permutation(str));
	return 0;
}
