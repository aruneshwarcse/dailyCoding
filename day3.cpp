#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //6 7 1 3 8 2 5 op -20
    int sum1=0,sum2=0;
    for(int i=0;i<n;i+=2){
        if(i%2==0){
            sum1+=a[i];
        }
        else{
            sum2+=a[i];
        }
    }
    cout<<(sum1>sum2?sum1:sum2);
}