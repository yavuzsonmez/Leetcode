/* 1. Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> res;

        for (unsigned int i = 0; i < nums.size(); i++)
        {
            for(unsigned int j = 0; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target && i != j)
                {
                    res.push_back(i);
                    res.push_back(j);

                    return res;
                }
            }
        }
        return res;
    }
};