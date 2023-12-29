	#include <bits/stdc++.h>
     using namespace std;
	int kSubstrConcat (int n, string s, int k)
	{
	    // Your Code Here
	    if(n%k!=0) return 0;
	    
	    map<string,int>mp;
	    string temp="";
	    temp+=s[0];
	    
	    for(int i=1;i<s.length();i++){
	        if(i%k==0){
	            mp[temp]++;
	            temp="";
	        }
	        temp+=s[i];
	    }
	    mp[temp]++;
	    
	    if(mp.size()>2) return 0;
	 
	            int count=0;
        for(auto it:mp){
            if(it.second>1)
             count++;
        }
        
        if(count>1)
         return 0;
         
        
        return 1;

	}
    int main(){
       int  N = 4;
        int K = 2;
       string S = "bdac";

       cout<<kSubstrConcat(N,S,K);
    }