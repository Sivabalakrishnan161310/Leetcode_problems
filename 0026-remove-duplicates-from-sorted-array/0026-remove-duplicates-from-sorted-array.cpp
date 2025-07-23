class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        string unique_elements="";

        int i=0, count=0;

        for(int j=1;j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {   
                i++;
                nums[i]=nums[j];               
            }
        }

        return i+1;
    }
};