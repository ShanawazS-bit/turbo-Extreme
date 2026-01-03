#include<iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int largestElement(vector<int>& nums) {
        int max = nums[0];
        for (int i = 0; i   < sizeof(nums); i++)
        {   
            if (nums[i] > max)
            {
                max = nums[i];


                
            }
            
        }
        return max;

        
    }
};