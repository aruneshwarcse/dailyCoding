#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a,a+n);
    int arr1[n],arr2[n];
    int max1=a[n-1];
    arr1[0]=max1;
    int max2=0;
    int j=0,k=1;
    for(int i=n-2;i>=0;i--){
        if(max1>max2){
            max2=max2+a[i];
            arr2[j++]=a[i];
        }
        
        else if(max1<=max2){
            max1=max1+a[i];
            arr1[k++]=a[i];
        }
    }
    if(max1==max2){
        cout<<"yes";
        for(int i=0;i<j;i++){
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<k;i++){
            cout<<arr1[i]<<" ";
        }
        
    }
    
    else{
        cout<<"no";
    }
    
    
}