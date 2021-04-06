#include<bits/stdc++.h>
using namespace std;

int setRank(int arr[],int n){
    int j=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            arr[j++]=arr[i];
        }
    }
    arr[j++]=arr[n-1];
    
    return j;
}

void findRank(int scores[], int n, int alice[], int m,int min,int max){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(alice[i]>max){
                cout<<1<<endl;
                break;
            }
            
            else if(alice[i]>=scores[j]){
                cout<<j+1<<endl;
                break;
            }
            
            else if(alice[i]<min){
                cout<<n+1<<endl;
                break;
            }
        }
    }
}

int main(){
    int players;
    cin>>players;
    
    int scores[players];
    for(int i=0;i<players;i++){
        cin>>scores[i];
    }
    
    players = setRank(scores,players);
    
    int max=scores[0];
    int min=scores[players-1];
    
    int games;
    cin>>games;
    
    int alice[games];
    
    for(int i=0;i<games;i++){
        cin>>alice[i];
    }
    
    findRank(scores,players,alice,games,min,max);
   
}