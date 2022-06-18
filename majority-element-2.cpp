#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &nums)
{
    // Write your code here.
 vector<int> X;
        int majority1=INT_MAX, majority2=INT_MAX ;
        int count1 = 0, count2 = 0;
    
        for(int i : nums){      
            if(i == majority1)
                ++count1;
            else if(i == majority2)
                ++count2;
            else if(count1 == 0) {
                majority1 = i;
                count1=1;
            } else if(count2 == 0) {
                majority2 = i;
                count2=1;
            } else{
                --count1;
                --count2;
            }
        }
        count1 = 0, count2 =0;
        for(int i: nums){
            if(i==majority1)
                count1++;
            else if(i==majority2)
                count2++;
        }
    
        if(count1 > (nums.size()/3))
            X.push_back(majority1);
        if(count2 > (nums.size()/3))
            X.push_back(majority2);
     
        return X;

}
