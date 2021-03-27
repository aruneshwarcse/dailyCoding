#include<bits/stdc++.h>
using namespace std;

int max(int a,int b){
    return a>b?a:b;
}

int maxsum(int a[],int n)
{
    int asum=0,sum=0;
    for(int i=1;i<=n;i++){
        if(a[i-1]<a[i]){
            sum+=a[i];
        }
        else{
            asum=max(asum,sum);
            sum=a[i];
        }
    }
    return max(asum,sum);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    a[0]=-9999;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cout<<maxsum(a,n);
}



