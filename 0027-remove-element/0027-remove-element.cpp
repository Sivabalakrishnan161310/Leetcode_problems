class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        vector<int> nums1;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                nums1.push_back(nums[i]);
            }
        }

        int k=nums1.size();

        nums=nums1;

        return k;
    }
};