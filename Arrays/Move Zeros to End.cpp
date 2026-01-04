#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {


        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                int j = i + 1;
                if (nums[j] !=0)
                {
                    swap(nums[i], nums[j]);
                }
                else{
                    while(nums[j] == 0){
                        j++;

                    }
                    if (j < nums.size())
                    {
                        swap(nums[j], nums[i]);
                    }
                    
                    
                }
                
            }
            
        }
        
        
        



        
        
    }


        void moveZeroesOptimal(vector<int>& nums) {
//invariant: all element before j is non zzero, maintain that


            int j = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] !=0)
                {
                    swap(nums[i], nums[j]);
                    j ++;

                }
                
                
            }
            

        }
};