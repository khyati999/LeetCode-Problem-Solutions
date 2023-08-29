class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        int counter = 0;
        int cur_sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            cur_sum += nums[i];
            if (cur_sum == k)
                counter++;

            if (mp.find(cur_sum - k) != mp.end())
                counter += mp[cur_sum - k];

            mp[cur_sum]++;
        }
        return counter;
    }
};