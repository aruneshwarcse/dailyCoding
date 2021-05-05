#include<bits/stdc++.h>
using namespace std;

int main(void){
  int noOfStrings;
  cin>>noOfStrings;

  char str[noOfStrings][100];

  for(int i=0;i<noOfStrings;i++){
    cin>>str[i];

  }

  int minLength=strlen(str[0]);

  for(int i=1;i<noOfStrings;i++){
    if(minLength>strlen(str[i])){
      minLength=strlen(str[i]);
    }
  }

  bool condition=true;
  
  int strStart=0,strEnd=minLength;
  do{

    for(int i=0;i<noOfStrings;i++){

      if(strlen(str[i])>strStart){       
        for(int j=strStart;j<strEnd;j++){
          cout<<str[i][j];
        }
        cout<<endl;
        }
      }

    int breaker=INT_MAX;

    for(int i=0;i<noOfStrings;i++){
      
      int len = strlen(str[i])-minLength;

      if(len<breaker&&len>0){
        breaker=len;
      }

    }

     if(breaker==INT_MAX){
        condition=false;
      }

      minLength+=breaker;
      strStart=strEnd;
      strEnd=minLength;


  }while(condition);
 


}