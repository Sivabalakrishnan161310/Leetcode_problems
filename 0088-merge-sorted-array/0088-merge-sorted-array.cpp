class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {   
        int j=0;

        for(int i=m+n-1;i>=0;i--)
        {
            if(nums1[i]==0 && j<n)
            {
                nums1[i]=nums2[j];
                j++;
            }
        }
        sort(nums1.begin(),nums1.end());
    }
};