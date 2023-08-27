class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size(),p_ind=0,n_ind=1;
        vector <int>result(n,0);

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                result[p_ind]=nums[i];
                p_ind+=2;
            }
            else
            {
                result[n_ind]=nums[i];
                n_ind+=2;
            }
        }
        return result;
    }
};