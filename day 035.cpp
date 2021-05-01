#include<bits/stdc++.h>
using namespace std;

int main(){
  
  vector<string> team;
  vector<string> ground;

  int noOfTeams;
  cin>>noOfTeams;


  for(int i=0;i<noOfTeams;i++){
    // string s;
    // getline(cin,s);
    char s[100],t[100];
    
    scanf("\n%[^-] - %[^\n]",s,t);
    
    team.push_back(s);
    ground.push_back(t);
  }


  for(int i=0;i<noOfTeams;i++){
    for(int j=i+1;j<noOfTeams;j++){
      cout<<team[i]<<" "<<"vs"<<" "<<team[j]<<"("<<ground[i]<<")"<<endl;
      cout<<team[j]<<" "<<"vs"<<" "<<team[i]<<"("<<ground[j]<<")"<<endl;
    }
  }

}
/*
csk
kkr
mi
rcb

csk kkr 0 1
kkr csk 1 0
csk mi  0 2
mi csk  2 0 
csk rcb 0 3
rcb csk 3 0
kkr mi  1 2
mi kkr  2 1
kkr rcb 1 3
rcb kkr 3 1
mi rcb  2 3
rcb mi  3 2
*/



