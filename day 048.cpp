#include<bits/stdc++.h>
using namespace std;

int main(void){

  string str;
  cin>>str;

  int charCount[26]={0};

  for(int i=0;i<str.length();i++){
    charCount[str[i]-'a']++;
  }


  for(int i=0;i<str.length();i++){

    if(charCount[str[i]-'a']==1){
      cout<<str[i];
      break;
    }
  }
  
}



