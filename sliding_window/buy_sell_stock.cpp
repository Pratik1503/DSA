#include <bits/stdc++.h>
using namespace std;


    int maxProfit(vector<int>& prices) {
       int buyprice=prices[0];
       int maxprofit=0;
        for(int i=0;i<prices.size();i++){
            buyprice=min(buyprice,prices[i]);
            int profit=prices[i]-buyprice;
            maxprofit=max(maxprofit,profit);
        }
        return maxprofit;
        
    }

    int main(){
        vector<int>v={7,1,5,3,6,4};

        int ans=maxProfit(v);

        cout<<ans<<endl;
    }