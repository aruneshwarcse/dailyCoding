#include<bits/stdc++.h>
using namespace std;
int main(){
    int cash;
    cin>>cash;
    
    int tempCash=cash-4;
    int noOfFive = tempCash/5;

    int oneProcess = ((tempCash%5)+4);
    int noOfOne = ((oneProcess%2==0)?2:1);
    
    int noOfTwo = cash-((noOfFive*5)+noOfOne);
    noOfTwo/=2;
    
    cout<<noOfFive+noOfTwo+noOfOne<<" "<<noOfFive<<" "<<noOfTwo<<" "<<noOfOne;
}