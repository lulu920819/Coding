#include<stdlib.h>
int maxProfit(int* prices, int pricesSize) {
    int profit1,profit2;
    int i;
    profit1=profit2=0;
    int curprofit=0;
    for(i=0;i<pricesSize-1;i++)
    {
        int t = prices[i+1]-prices[i];
        if(t>0)
        {
            curprofit+=t;
            if(curprofit>=profit1)
            {
            profit2 = profit1;
            profit1 = curprofit;
            printf("if1:  %d\n",profit1);
            printf("if1:  %d\n",profit2);
            printf("if1:  %d\n",curprofit);
            }
            if(curprofit>profit2&&curprofit<profit1)
            {
            profit2 = curprofit;
            printf("if2:  %d\n",profit1);
            printf("if2:  %d\n",profit2);
            printf("if2:  %d\n",curprofit);
            }
        }

        else
        {

                curprofit = 0;
        }
    }
    printf("1:  %d\n",profit1);
    printf("1:  %d\n",profit2);
    printf("1:  %d\n",curprofit);
    return (profit1+profit2)>curprofit?(profit1+profit2):curprofit;
}

void print(int *nums, int numsSize)
{
        int i;
        for(i = 0; i<numsSize; i++)
        {
            printf("%d\t",nums[i]);
        }
        printf("\n");
}

int main()
{
    int nums[3] = {1,2,4};
    int ret;

    ret = maxProfit(nums,3);
    printf("ret\t%d\n",ret);
}
