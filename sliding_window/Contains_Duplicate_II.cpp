#include <bits/stdc++.h>
using namespace std;

    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0,j=0,n=nums.size();
        unordered_set<int>st;
        for(;j<n;j++){
            if(j-i>k) {
                 st.erase(nums[i]);
                 i++;
             }
             if(st.find(nums[j])!=st.end()){   
                 return true;
             }            
             st.insert(nums[j]);
        }
        return false;
    }

    int main(){
        vector<int> nums = {1,2,3,4,};
        int k = 3;

        cout<<containsNearbyDuplicate(nums,k);
    }
