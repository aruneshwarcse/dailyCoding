#include <bits/stdc++.h>
using namespace std;

int superDigits(string str, int k){

    long long int rem = 0;
    int n = str.length();

    for(int i=0;i<n;++i){
        rem=(rem+str[i]-'0');
    }

    rem%=9;

    k%=9;

    if(rem==0) rem=9;
    if(k==0) k=9;

    rem=(rem*k)%9;

    if(rem==0) rem=9;

    return rem;


}
 
int main()
{
    string str;
    cin>>str;

    int k;
    cin>>k;

    int ans = superDigits(str,k);
    cout<<ans;
    return 0;
}