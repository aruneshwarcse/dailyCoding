#include <bits/stdc++.h>
using namespace std;

int checkSystemCount(int n, int base){
    
    int systemArray[100];
    int i=0;
    
    while(n>0){
        systemArray[i++]=n%base;
        n=n/base;
        
    }
    
    // for(int j=i-1;j>=0;--j)
    //     cout<<systemArray[j];
    // cout<<endl;
    
    return i;
    
}

int main(void)
{
    int num,n;
    scanf("%d%n",&num,&n);
    
    int binary = checkSystemCount(num,2);
    int hexa = checkSystemCount(num,6);
    int octal = checkSystemCount(num,8);
    
    cout<<binary+hexa+octal+n;
    
    return 0;
}
