#include<bits/stdc++.h>
using namespace std;

int main(){
    int machines,workers,cost,candies;
    cin>>machines>>workers>>cost>>candies;
    
    int pass=0;
    // int sum=0
    int init=1;
    int temp,temp2;
    while(candies>=init){
        init = machines*workers;
        temp = init/cost;
        // temp2=init%2;
        
        if(machines>workers){
            workers+=temp;
        }
        else{
            machines+=temp;
        }
        
        pass++;
    }
    
    cout<<pass;
}
