#include<bits/stdc++.h>
using namespace std;

int power(int n){

    int num=1,tmp=n;

    while(tmp!=0){
        num*=n;
        tmp--;
    }

    return num;
}

int main(){
    int number;
    cin>>number;

    for(int i=1; i<number; ++i){
        if(power(i)==number){
            cout<<i;
            break;
        }
    }


}