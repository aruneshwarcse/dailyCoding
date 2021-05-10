#include<bits/stdc++.h>
using namespace std;

int main(void){
    char clock[5][5][5];
    char originalClock[5][5][5]={
                  {"*","11","12","1","*"},
                  {"10","*","*","*","2"},
                  {"9","*","*","*","4"},
                  {"8","*","*","*","5"},
                  {"*","7","6","5","*"}
                };

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>clock[i][j];
        }
    }

    string hour, minutes;
    cin>>hour>>minutes;

    string h,m;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(clock[i][j]==hour){
                h=originalClock[i][j];
            }

            if(clock[i][j]==minutes){
                m=originalClock[i][j];
            }
        }
    
    }

    stringstream dood(m);
    int min=0;
    dood>>min;

    cout<<h<<":"<<min*5;

}
