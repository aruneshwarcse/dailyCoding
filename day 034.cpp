#include<bits/stdc++.h>
using namespace std;

void print(char c,int n){
  for(int i=0;i<n;i++){
    cout<<c<<" ";
  }
}

int main(){

  char letters[7];
  for(int i=0;i<6;i++){
    cin>>letters[i];
  }

  int sides;
  cin>>sides;

  
  for(int i=0;i<sides;i++){
      print('*',sides);
      print(letters[5],sides);
      print('*',sides);
      print('*',sides);
      cout<<endl;
  
  }

  for(int i=0;i<sides;i++){
      print(letters[3],sides);
      print(letters[0],sides);
      print(letters[1],sides);
      print(letters[2],sides);
      cout<<endl;
  }

    for(int i=0;i<sides;i++){

      print('*',sides);
      print(letters[4],sides);
      print('*',sides);
      print('*',sides);
      cout<<endl;

  }

}

/*

* 6 * *
4 1 2 3
* 5 * *

*/