class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        if (nums.size() == 0)
            return 0;
        int count = 1;
        int maxi = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                if (nums[i] - nums[i - 1] == 1)
                {
                    count++;
                }
                else
                {
                    maxi = max(maxi, count);
                    count = 1;
                }
            }
        }
        return max(maxi, count);
    }
};