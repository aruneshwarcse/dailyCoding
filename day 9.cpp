#include<bits/stdc++.h>
using namespace std;

int missingNo(int n,int a[]){
    int total=(n*(n+1))/2;
    
    for(int i=0;i<n-1;i++){
        total-=a[i];
    }
    
    return total;
    
}

int main()
{
    int number;
    cin>>number;
    int arr[number];
    for(int i=0;i<number-1;i++)
    {
        cin>>arr[i];
    }
    
    cout<<missingNo(number,arr);
}