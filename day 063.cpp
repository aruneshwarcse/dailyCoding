#include<bits/stdc++.h>
using namespace std;

#define MAX 500


//5, 4,2  2
int multiply(int x, int factorial[], int factorialSize){
    int carry = 0;

    //1 2
    for(int i=0;i<factorialSize;++i){
        //10  = 2*5 + 0
        int prod = factorial[i]*x + carry;

        //0 2
        factorial[i] = prod%10;

        //1
        carry = prod/10;
    }


    while(carry){
        //0,2,1 
        factorial[factorialSize] = carry%10;
        //0
        carry = carry/10;

        //3
        factorialSize++;
    }

    return factorialSize;
}

void fact(int n){
    // cout<<n;
    int factorial[MAX];
    factorial[0] = 1;
    int factorialSize = 1;
    for(int i=2;i<=n;++i){
        // factorial[] x i
        // resize factorialSize
        //2                       //5  4,2     2
        factorialSize = multiply(i, factorial, factorialSize);

    }

    for(int i=factorialSize-1;i>=0;--i)
        cout<<factorial[i];



}

int main(){
    int n;
    cin>>n;

    fact(n);
}
