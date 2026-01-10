#include<iostream>

#include<vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for (int i = 0; i < nums.size(); i++)
        {
            int newtarget = target - nums[i];
            for (int j = i+1; j < nums.size(); j++)
            {
                if (nums[j] == newtarget)
                {
                    return {i,j};

                }
                
                
            }
            
        }
        return {};
        

        

        
        
    }

    vector<int> twoSumOptimal(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int i= 0;
        int j = nums.size()-1;
        while(i < j)
        {
            if (nums[i] + nums[j] > target)
            int currentSum = nums[i] + nums[j];
            if (currentSum == target)    
            {
                return {i,j};
            } else if (currentSum < target) {
                 i++;
            } else { // currentSum > target
                j--;
            }
            if (nums[i] + nums[j] < target)
            {
                 i ++ ;

            }
            if (nums[i] + nums[j] == target)    
            {
                return {i,j};
            }
            
            
            
        }
        return {};

        

    }
};