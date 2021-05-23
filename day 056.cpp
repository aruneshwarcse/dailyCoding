#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long int testCases;
    cin>>testCases;
    long long int cases = 1;
    
    while(testCases--){
        
        long long int goldBars;
        cin >> goldBars;
        
        long long int ans = 0;
        for(long long int days=1;;++days){
            long long int noOfGoldBars = goldBars-days*(days-1)/2;
            
            if(noOfGoldBars <=0) break;
            
            if(noOfGoldBars%days ==0){
                noOfGoldBars/=days;
                ans++;
            }
        }
        
        cout<<"Case #"<<cases<<": "<<ans<<"\n";
        cases+=1;
    }
    
}