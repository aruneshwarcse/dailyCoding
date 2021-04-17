#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int testCases;
    cin>>testCases;
    
    for(int j=0;j<testCases;j++){
        
        int cost;
        cin>>cost;
    
        int money;
        cin>>money;
    
        int arr[cost];
        for(int i=0;i<cost;i++){
            cin>>arr[i];
        }
        
        sort(arr,arr+cost);
    
        int maxHouses=0;
        int i=0;
    
		while(arr[i]<=money){
		    maxHouses++;
		    money-=arr[i++];
		}
		
        cout<<"Case #"<<j+1<<": "<<maxHouses<<endl; 
    }
}