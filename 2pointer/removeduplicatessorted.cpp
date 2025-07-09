class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for (int i=0; i<nums.size(); i++)
        {
            // if (nums[i]!=nums[i+1])
            // {
            //     k++;
            //     nums[k]=nums[i];
            // }
            if (nums[i]==nums[i+1])
            {
                int t=i;
                while (t<nums.size())
                {
                if (nums[t+1]==nums[t+2])
                t=t+2;
                }
                nums[i]=nums[t];
                i=t;
            }


        }
        return k;
    }
};
//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
