#include<bits/stdc++.h>
using namespace std;

int add(int a,int b)
{
    return printf("%*c%*c",a,'\r',b,'\r');
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<add(a,b);
}