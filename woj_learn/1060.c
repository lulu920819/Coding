#include<stdlib.h>
#include<stdio.h>

void oriput(int ** matrix,int m,int n)
{
    int i,j;
    for(i = 0;i<m;i++)
    {
//        int *row = *(matirx +i);
        for(j = 0;j<n;j++)
            printf("%d ",*(*(matrix+i)+j));
        printf("\n");
    }
}

void reput(int ** matrix,int m,int n)
{
    int i,j;
    for(i = 0;i<n;i++)
    {
        for(j = 0;j<m;j++)
            printf("%d ",*(*(matrix+j)+i));
        printf("\n");
    }
}

void destory(int** matrix, int m)
{
    int i;
    for(i = 0;i<m;i++)
        free(*(matrix+i));
    free(matrix);
}

int main()
{
    int M,N;
    while(scanf("%d %d",&M,&N)!=EOF)
    {
        int i;
        int ** matrix= (int **)malloc(sizeof(int *)*M);
        if(matrix ==NULL)
            exit(1);
        for(i = 0; i < M; i++)
        {
            int j;
//            int *tmp = *(row+i);
//            *(row+i) = (int *)malloc(sizeof(int)*N);
            *(matrix+i) = (int *)malloc(sizeof(int)*N);
            if((*matrix+i)==NULL)
                exit(1);
            for(j = 0;j<N;j++)
                scanf("%d",(*(matrix+i)+j));
        }
        //oriput(matrix,M,N);
        reput(matrix,M,N);
        destory(matrix,M);

    }


    return 0;
}
