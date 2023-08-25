class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int count=0,i;
        sort(nums.begin(),nums.end());
        for (i=0;i<nums.size();i++)
        {
            if(nums[i]==count)
                count++;
        }
        return count;
        
    }
};