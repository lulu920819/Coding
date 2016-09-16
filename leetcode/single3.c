#include<stdlib.h>
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumber(int* nums, int numsSize, int* returnSize) {
    if (!nums || (numsSize < 2)) return NULL;
    int * result;
    result = (int *)malloc(sizeof(int)*2);

    if(result)
    {
      /*  if (numsSize == 2)
        {
            result[0]=nums[0];
            result[1]=nums[1];
            * returnSize = 2;
            return result;
        }
    */

        int i;
        int sum=0;
        int flag;
        for(i=0;i<numsSize;i++)
        {
           sum ^= nums[i];
        }
        printf("sum:%d\n",sum);
        flag = (sum & ~(sum-1));
        printf("flag:%d\n",flag);
        result[0] = 0;
        result[1] = 0;
        for(i=0;i<numsSize;i++)
        {
            if((nums[i]&flag) == 0)
                {result[0]^=nums[i];printf("00:%d:%d\n",i,nums[i]);}
            else
                {result[1]^=nums[i];printf("11:%d:%d\n",i,nums[i]);}
        }
        //result[1] = sum ^ result[0];
        * returnSize = 2;
    }
    return result;
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
    int nums[4] = {0,0,1,2};
    int returnSize;
    int *ret;
     print(nums,4);
    ret = singleNumber(nums,4,&returnSize);
    print(ret,2);
}
