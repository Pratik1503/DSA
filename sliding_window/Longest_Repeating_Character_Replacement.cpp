  #include <bits/stdc++.h>
   using namespace std;

int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int i=0,j=0,ans=0,maxf=0;
        while(j<s.length()){
            mp[s[j]]++;
             maxf=max(maxf,mp[s[j]]);
            if(j-i+1-maxf>k){
                mp[s[i]]--;
                i++;
            }
            else{
            ans=max(ans,j-i+1);
            }
            j++;
        }
        return ans;
        
    }

    int main(){
        string s = "ABAB";
        int k = 2;
        cout<<characterReplacement(s,k);
    }