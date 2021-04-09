#include<bits/stdc++.h>
using namespace std;

void checkDiscipline(int timings[], int students, int cancelThreshold){
    int onTimeCount=0;
    for(int i=0;i<students;i++){
        if(timings[i]<=0){
            onTimeCount+=1;
        }
    }
    // cout<<onTimeCount;
    if(onTimeCount>=cancelThreshold){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}


int main(){
    int testCases;
    cin>>testCases;

    for(int i=0;i<testCases;i++){
        int students, cancelThreshold;
        cin>>students>>cancelThreshold;
    
        int timings[students];
        for(int i=0;i<students;i++){
            cin>>timings[i];
        }
        
        checkDiscipline(timings, students, cancelThreshold);
    }  
}