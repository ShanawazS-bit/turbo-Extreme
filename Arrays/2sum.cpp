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
        map <int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int num = nums[i];
            int moreneeded = target - num;
            if (mpp.find(moreneeded) != mpp. i)
            {
                /* code */
            }
            
        }
        
};