#include "stdio.h"
int main()
{
    char j,k,l;
    for(j='X';j<='Z';j++) //不和X比
    {

        for(k='X';k<='Z';k++)
        {
            if(k!=j)
            {
                for(l='X';l<='Z';l++)
                //for(l='Y';l<='Y';l++)//不和XZ
                {
                    if(l!=j&&l!=k)
                    {
                        printf("A %c\n",j);
                        printf("B %c\n",k);
                        printf("C %c\n",l);
                    }

                }
            }
        }
    }


    //for(j='X';j<='Z';j++)
    for(j='Y';j<='Z';j++) //不和X比
    {

        for(k='X';k<='Z';k++)
        {
            if(k!=j)
            {
                //for(l='X';l<='Z';l++)
                for(l='Y';l<='Y';l++)//不和XZ
                {
                    if(l!=j&&l!=k)
                    {
                        printf("A %c\n",j);
                        printf("B %c\n",k);
                        printf("C %c\n",l);
                    }

                }
            }
        }
    }
    return 0;
}
