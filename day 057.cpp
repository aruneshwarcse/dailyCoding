#include<bits/stdc++.h>
using namespace std;


int main(void){
    int size;
    cin>>size;

    vector<int> arr;
    
    for(int i=0;i<size;++i){
        int tmp;
        cin>>tmp;

        arr.push_back(tmp);
    }

    sort(arr.begin(), arr.end());

    int count = 1;

    for(int i=1;;++i){
        if(arr[i]==arr[i-1])
            count++;
        
        else
            break;
    }

    int flag=0, breaker=1;

    if(size%2!=0) 
        size--;
    
    for(int i=0;i<size;i+=count){
        if(breaker==0) 
            break;
        

        for(int j=i+1;j<i+count; ++j){
            if(arr[j]==arr[j-1]){
                flag=1;   
            }

            else{
                flag=0;
                breaker=0;
                break;
            }
        }
    }

    cout<<(flag==1?"Yes":"No");
   

}