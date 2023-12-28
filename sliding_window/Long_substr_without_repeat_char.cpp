#include <bits/stdc++.h>
using namespace std;

    int lengthOfLongestSubstring(string s) {
        set<char>st;

        int i=0,j=0,ans=0;

        while(j<s.length()){
            if(st.find(s[j])==st.end()){
                st.insert(s[j]);
                j++;
            }
            else{
                st.erase(s[i++]);

            }


            ans=max(ans,j-i);
        }
        return ans;
    }

    int main(){
        string s="abcabcbb";

        cout<<lengthOfLongestSubstring(s);
    }