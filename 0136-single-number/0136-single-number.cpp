class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {   
        int size=nums.size(), single_one;

        for(int i=0;i<size;i++)
        {
            int count=0;

            for(int j=0;j<size;j++)
            {
                if(nums[i]==nums[j])
                {
                    count++;
                }               
            }
            if(count==1)
            {
                single_one=nums[i];
            }
        }
        return single_one;
    }
};