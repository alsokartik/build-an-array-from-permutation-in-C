#include<stdio.h>
int buildArray(int* nums, int numsSize, int* ans) {
    for(int i=0;i<numsSize;i++)
    {
        ans[i]= nums[nums[i]];
    }
    for(int i=0;i<numsSize;i++)
    {
        printf("%d->",ans[i]);
    }
}
int main()
{
    int nums[]={0,2,1,5,3,4};
    int numsSize= sizeof(nums)/sizeof(nums[0]);
    int ans[numsSize];
    buildArray(nums,numsSize,ans);
    return 0;
} 