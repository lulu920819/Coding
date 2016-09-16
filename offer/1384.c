#include<stdio.h>
#include<stdlib.h>

//void output(int ** matrix,int row,int col)
//{
//    int i,j;
//    for(i = 0;i < row;i++)
//    {
//        for(j = 0; j<col;j++)
//        {
//            printf("%d\t",matrix[i][j]);
//        }
//        printf("\n");
//    }
//}

int search(int ** matrix,int val,int row,int col)
{
    int i,j;
    if(matrix == NULL) return 0;
    if(val<matrix[0][0]||val>=matrix[row-1][col-1])
        return 0;
    for(i=0;i<row;i++)
    {
        if(matrix[i][0]<=val&&matrix[i][col-1]>=val)
        {
            for(j=0;j<col;j++)
            {
                if(matrix[i][j]==val)
                    return 1;
            }
        }
        else if(matrix[i][0]>val)
            return 0;
    }
    return 0;
}

int main()
{
    int row,col;
    while(scanf("%d%d",&row,&col)!=EOF)
    {
        int val;
        int i,j;
        int isin;
        int **matrix = (int **)malloc(sizeof(int *)*row);
        scanf("%d",&val);
        if(row==0||col==0)
            continue;
        for(i = 0;i < row;i++)
        {
            matrix[i] = (int *)malloc(sizeof(int)*col);
            for(j = 0; j<col;j++)
            {
                scanf("%d",&matrix[i][j]);
            }
        }
        //output(matrix,row,col);
        isin = search(matrix,val,row,col);
        printf("%s\n",isin?"Yes":"No");
        for(i = 0;i<row;i++)
            free(matrix[i]);
        free(matrix);
    }
}
