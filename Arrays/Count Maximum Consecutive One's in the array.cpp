#include<iostream>
#include<vector>
#include<set>
#include<math.h>


using namespace std;


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;
    
        for (int i = 0; i < nums.size(); i++)

        {

            if (nums[i] == 1)
            {
                count += 1;
                maxCount = max(count, maxCount);

            }
            else{
                count = 0;

            }
            

        }
        return maxCount;


            
    


        
    }
};