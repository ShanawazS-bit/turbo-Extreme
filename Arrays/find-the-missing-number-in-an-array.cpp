#include<iostream>
#include <vector>
#include<math.h>
using namespace std;


class Solution {
public:
    int findMissingBrute(vector<int>& nums) {
        //invariant ki difference should be constant for no missing pr
        //invariant ki index matching
        for (int i = 0; i < nums.size(); i++)
        {
            if (i + 1 != nums[i])   
            {
                return i + 1;
            }
            
        }
    }

    int findmissingOpti(vector<int> & nums){

        int n1 = nums[(nums.size() - 1)];
        int sum1 = n1* (n1+1)/2;
        int sum2 =0;
        for (int i = 0; i < nums.size(); i++)
        {
            //calculating sum
            sum2 += nums[i];


        }
        //difference 
        int diff = sum1-sum2;
        return diff;


        

    }

    int findMissingXOR(vector<int> &nums){
        int xor1, xor2;
        
        int n = nums[(nums.size() - 1)];




        for (int i = 0; i < nums.size(); i++)
        {
            xor1 ^= nums[i];

        }

        while (n != 0)
        {
            xor2 ^= n;
            n--;

        }
        
        int final = xor1 ^ xor2;
        return final;
        
        
        
    }
};