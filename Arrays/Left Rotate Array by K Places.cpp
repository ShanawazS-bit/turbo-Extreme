#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {


        vector<int> temp;
        k %= nums.size();

        for (int i = 0; i < nums.size(); i++)
        {
            if (i < k)
            {
                temp.push_back(nums[i]);
            }
            
            else{
                nums[i-k] = nums[i];
            }

            
            

            
        }
        for (int i = 0; i < k; i++)
            {
                nums[nums.size()-k + i] = temp[i];
            }
        
        
        
        



    }

    
        
    

};