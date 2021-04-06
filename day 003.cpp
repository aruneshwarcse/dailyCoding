#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
    return a>b?a:b;
}

int maximumLoot(int highestValue[], int arrSize)
{
    //int dp[arrSize];
    //dp[0]=highestValue[0];
    //dp[1]=max(highestValue[0],highestValue[1]);
    int var1,var2;
    var1=highestValue[0];
    var2=max(highestValue[0],highestValue[1]);
    int maxSum=0;
    for(int i=2;i<arrSize;i++){
        maxSum=max(highestValue[i]+var1,var2);
        var1=var2;
        var2=maxSum;
    }
    return maxSum;
}

int main(){
    int arrSize;
    cin>>arrSize;
    int arr[arrSize];
    for(int i=0;i<arrSize;i++){
        cin>>arr[i];
    }
    
    cout<<maximumLoot(arr,arrSize);
}