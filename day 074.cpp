#include<bits/stdc++.h>
using namespace std;
#define size 5

int main(){
    int n;
    cin>>n;
    
    vector<int> a;
    
    for(int i=0;i<n;++i){
        int tmp;
        cin>>tmp;
        a.push_back(tmp);
    }
    
    
    vector<int> b(size,0);
    
    for(int i=0;i<n;++i){
        b[a[i]]++;
    }
    int max=0,ans=0;
    
  
    
    for(int i=1;i<=5;++i){
        if(b[i]>max){
            max=b[i];
            ans = i;
        }
        
    }
    
    cout<<ans;
}
