class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i,low,high;
        set<vector<int>> set;
        vector<vector<int>> Result;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size()-2;i++)
        {
            low=i+1;
            high=nums.size()-1;
            while(low<high)
            {
                if(nums[i]+nums[low]+nums[high]==0 )         
                {
                    set.insert({nums[i], nums[low], nums[high]});
                    low++;
                    high--;
                }
                else if(nums[i]+nums[low]+nums[high]<0)
                    low++;
                else
                    high--;
            }
        }
        for(auto i:set){
            Result.push_back(i);
        }
        return Result;
    }
};