#include<bits/stdc++.h>
using namespace std;

int main(void){

    int testCases;
    cin >> testCases;
    
    int cases=0;
    while(testCases!=0){
        int noOfElements;
        cin>>noOfElements;
        
        int path[noOfElements];
        
        for(int index = 0; index < noOfElements; ++index)
            cin>> path[index];
        
        int peaks = 0;
            
        for(int index = 1; index < noOfElements-1; ++index){
            if(path[index]>path[index-1] && path[index]>path[index+1]){
                peaks+=1;
            }
        }
        cases++;
        cout<<"Case #"<<cases<<": "<<peaks<<endl;
        testCases--;
    }
}

/*Bike Tour*/