#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;


#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;


class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {

        int low = 0;
        int med = 0;
        int high = nums.size() - 1 ;


        //dutch national flag algorithm 

        while(med <= high)
        {
            if (nums[med] == 0)
            {
                swap(nums[med],nums[low]) ;
                med++;
                low++;

            }
            else if ( nums[med] == 1)
            {
                med++;

            }
            else if(nums[med] == 2)
            {
                swap(nums[med], nums[high]);
                high--;
            }
            
        }

        

        
    }
};