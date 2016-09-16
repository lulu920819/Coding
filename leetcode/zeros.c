void moveZeroes(int* nums, int numsSize) {
    int i,index=0;

    for(i = 0; i<numsSize; i++)
    {
        if(nums[i]!=0)
            nums[index++] = nums[i];
    }

    for(i = index;i<numsSize;i++)
    {
         nums[i]=0;
    }
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
    int nums[5] = {0,1,0,3,12};
     print(nums,5);
    moveZeroes(nums,5);
    print(nums,5);
}
