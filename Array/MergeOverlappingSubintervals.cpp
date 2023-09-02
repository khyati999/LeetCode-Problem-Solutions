class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> Result;
        sort(intervals.begin(), intervals.end());
        int p1 = intervals[0][0], p2 = intervals[0][1];
        for (auto it : intervals)
        {
            if (it[0] > p2)
            {
                Result.push_back({p1, p2});
                p1 = it[0];
                p2 = it[1];
            }
            else if (it[1] > p2)
                p2 = it[1];
        }
        Result.push_back({p1, p2});
        return Result;
    }
};