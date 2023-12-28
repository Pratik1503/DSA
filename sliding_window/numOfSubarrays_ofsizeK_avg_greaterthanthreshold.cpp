  #include <bits/stdc++.h>
   using namespace std;

   int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        int i=0,j=0,ans=0,sum=0;

        for(;j<arr.size();j++){
            sum+=arr[j];
            if(j-i+1>=k){
                if(sum/k>=threshold){
                    ans++;
                }
                sum-=arr[i++];
            }
        }
        return ans;
        
    }

    int main(){
        vector<int> v ={2,2,2,2,5,5,5,8k};
        cout<<numOfSubarrays(v, 3, 4);
    }