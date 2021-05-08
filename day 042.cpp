#include<bits/stdc++.h>
using namespace std;

int main(void){
    
    int noOfElements;
    cin>>noOfElements;
    
    int marks[noOfElements];
    for(int i=0;i<noOfElements;i++){
        cin>>marks[i];
    }
    
    int key;
    cin>>key;
    key-=1;

    set<int, greater<int>> s1;
    set<int, greater<int>>::iterator itr;
    
    for(int i=0;i<noOfElements;i++){
        s1.insert(marks[i]);
    }
    
    int rank=0;
    for(itr=s1.begin();itr!=s1.end();itr++){
        rank++;
        if(marks[key]==*itr){
            cout<<rank;
        }  
    }
}