#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {


        if (nums.size() == 0)
        {
            return 0;
        }

        int* i = nums.data();
        int* j = nums.data() + 1;

        
            while (j < nums.data() + nums.size()) //points to 1 past the last element

            {
                if (*i != *j)
                {
                    *i++;
                    *i= *j;
                }
                
                j++;
                
            
            }

            return (i - nums.data() + 1);
   
        
    }
        
};