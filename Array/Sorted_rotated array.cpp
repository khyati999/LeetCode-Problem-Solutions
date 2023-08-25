class Solution {
public:
    bool check(vector<int>& nums) {
        int n=size(nums),count=0;

        int i;
        for(i=0;i<n;i++)
        {
            if(nums[i]>nums[(i+1)%n])
            {
                count++;
            }
        }
        return count<=1;
    }
};