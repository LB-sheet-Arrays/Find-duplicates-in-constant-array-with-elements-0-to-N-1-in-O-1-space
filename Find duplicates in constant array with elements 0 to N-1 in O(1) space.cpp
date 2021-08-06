/*
each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums (Indexing method use nahi kar sakte) and uses only constant extra space.

Approach:

use sum formula
    

*/


class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int sum=0,ans;
        int n=sizeof(nums)/sizeof(nums[0]);
        
        //getting sum of array elements
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        
        //getting the sum of natural numbers from [1..n]
        int orig_sum=0;
        
        for(int i=0;i<n;i++)
        {
            orig_sum=orig_sum+(i+1);
        }
        
        ans=orig_sum-sum;
        return ans;
    }
};
};
