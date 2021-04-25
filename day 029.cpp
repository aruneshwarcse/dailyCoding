#include<bits/stdc++.h>

using namespace std;
int main(){

    int n;
    cin>>n;
    int digitCount=0;
    int i=1;
    while(i<=n){
        digitCount+=n-i+1;
        i*=10;
    }
    cout<<digitCount;
    // int temp;
    // cin>>temp;
    // int count=0;
    
    // if(temp<10){
    //     cout<<temp;
    //     }
    
    // else if(temp>=10 && temp<100){
    //     temp-=9;
    //     count = temp*2 + 9;
    // }
    
    // else if(temp>=100 && temp<=999){
    //     temp-=99;
    //     count = temp*3 + 90*2 + 9;
    // }
    
    // else if(temp>=1000 && temp<=9999){
    //     temp-=999;
    //     count = temp*4 + 90*2 + 9 + 900*3;
    // }
    // else if(temp>=10000 && temp<=99999){
    //     temp-=9999;
    //     count = temp*5 + 90*2 + 9 + 900*3 + 9000*4;
    // }
    // else if(temp>=10000 && temp<=99999){
    //     temp-=99999;
    //     count = temp*6 + 90*2 + 9 + 900*3 + 9000*4 +90000*5;
    // }
    
    // cout<<count;
}