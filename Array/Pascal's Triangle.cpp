class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
            
        if(numRows==0)
            return result;
        
        result.push_back({1});
        for(int rows=1;rows<numRows;rows++)
        {

            vector<int>temp;
            temp.push_back(1);
            int cols=1;
            while(cols<rows)
            {
               
                temp.push_back(result[rows-1][cols-1]+result[rows-1][cols]);
                cols++;
            }
            temp.push_back(1);
            result.push_back(temp);
        }
        return result;
    }
};