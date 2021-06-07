#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int> a(n);
    
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        
        a.push_back(tmp);
        
        // cin>>a[i];
    }
        
    sort(a.begin(), a.end());
    
    int pair=0;
    
    for(int i=0;i<n;++i){
        if(a[i] == a[i+1]){
            i++;
            pair++;
        }
            
    }
    
    cout<<pair;
  
}