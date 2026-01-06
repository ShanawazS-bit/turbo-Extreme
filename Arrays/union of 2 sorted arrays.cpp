#include<iostream>
#include<vector>
 using namespace std;


class Solution {



public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int p= 0;
        int q = 0;
        
        vector<int> final;

        while( p < nums1.size() && q < nums2.size())
        {

                if (nums1[p] > nums2[q])    

                {
                    if (final.size() == 0 || final.back() != nums2[q])  
                        {
                                final.push_back(nums2[q]);
                                q ++;   


                    }
                    else{
                        q++;
                    }
                    
                }

                else if(nums1[p] < nums2[q])

                {
                    if (final.size() == 0 || final.back() != nums1[p])  
                    {
                        final.push_back(nums1[p]);
                        p++;   
                        

                    }
                    else{
                        p++;

                    }
                }
                else
                {

                    //check if already in the array?
                    if (final.size() == 0 || final.back() != nums1[p])  
                    {
                        final.push_back(nums1[p]);
                        p++;   
                        q++;


                    }
                    else{
                        p++;
                        q++;

                    }
                    
                    

                }
                

                
                
                
        }  

        while(p < nums1.size()){
             if (final.size() == 0 || final.back() != nums1[p])  
                    {
                        final.push_back(nums1[p]);
                        p++;   
                        

                    }
                    else{
                        p++;

                    }

        }
        while(q < nums2.size()){

             if (final.size() == 0 || final.back() != nums2[q])  
                    {
                        final.push_back(nums2[q]);
                        q++;   


                    }
                    else{
                        q++;

                    }

                    //this if block -entirely be replaced by push_unique(nums2[q])  

        }

        return final;
        
        
    }
};