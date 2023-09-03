class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        // Merge Sort
        int i = 0, j = 0, k = 0;
        vector<int> temp;
        temp = nums1;
        while (i < m && j < n)
        {
            if (temp[i] <= nums2[j])
                nums1[k++] = temp[i++];

            else if (nums2[j] < temp[i])
                nums1[k++] = nums2[j++];
        }
        while (i < m)
            nums1[k++] = temp[i++];

        while (j < n)
            nums1[k++] = nums2[j++];

        //     or
        // for(int i=0;i<n;i++)
        // {
        //     nums1[m+i]=nums2[i];
        // }
        // sort(nums1.begin(),nums1.end());
    }
};