#include <bits/stdc++.h>
using namespace std;
#define N 10
int i=1;
void print(){
    if(i<=N){
        cout<<i++<<" ";
        print();
    }
}

int main(void)
{
    print();
}

