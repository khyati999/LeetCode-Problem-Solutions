class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int row=matrix.size();
        int col=matrix[0].size();
        int left=0,right=col-1;
        int top=0,bottom=row-1;
        vector<int>mat_res;
       while(top<=bottom && left<=right)
       {
            for(int i=left;i<=right;i++)
            {
                mat_res.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                mat_res.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
                {
                    mat_res.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left<=right)
            {
                for(int i=bottom; i>=top;i--)
                {
                    mat_res.push_back(matrix[i][left]);
                }
                left++;
            }
       }
        
        return mat_res;
    }
};