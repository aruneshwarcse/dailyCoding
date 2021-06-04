#include <bits/stdc++.h>
using namespace std;
 
void findPrime(int s,int n){

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++){
        if (prime[p] == true){
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    int min=0,max=0;
 
    for (int p = s; p <= n; p++){
        if (prime[p]){
            if(min==0)
                min=p;
            if(max==0){
                max=p;
            }
            else
                max=p;
        }
            
    }
    if(min==0 && max==0){
        cout<<-1<<endl;
    }
    else if(min>0 && max>0 && min==max){
        cout<<0<<endl;
    }
    else{
        cout<<max-min<<endl;
    }
        
}
 
// Driver Code
int main()
{
    int t;
    cin>>t;
    while(t--){
        
        int start, end;
        cin>>start>>end;
    
        findPrime(start,end);
    }
  
    return 0;
}