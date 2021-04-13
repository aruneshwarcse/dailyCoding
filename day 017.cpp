#include<bits/stdc++.h>
using namespace std;
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

int findWater(int a[],int n){
    int maxWater=0;
    for(int i=1;i<n-1;i++){
        int left=a[i];
        
        for(int j=0;j<i;j++){
            left=max(left,a[j]);
        }
        
        int right=a[i];
        for(int j=i+1;j<n;j++){
            right=max(right,a[j]);
        }
        
        maxWater+=(min(left,right)-a[i]);
    }
    
    return maxWater;
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<findWater(arr,n);
}