#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    cin>>word;
    
    int len = word.length();
    
    int arrlen;
    cin>>arrlen;
    
    int arr[arrlen];
    
    for(int i=0;i<arrlen;++i)
        cin>>arr[i];
    
    int area = 0;
    
    for(int i=0;i<len;++i){
        if(arr[word[i]-'a'-]>area)
            area=arr[word[i]-'a'];
        
    }
    
    cout<<area*len;
    
    
}
