#include<bits/stdc++.h>
using namespace std;

char matrix[50][50];
char str[50];


int presentInRange(int sRow, int sCol, int eRow, int eCol){
  char original[50], reverse[50];
  // string original,reverse;
  memset(original, '\0', sizeof(char)*50);
  memset(reverse, '\0', sizeof(char)*50);

  int l=0, k= abs(sRow-eRow)+abs(sCol-eCol);

  for(int i=sRow;i<=eRow;i++){
    for(int j=sCol;j<=eCol;j++){
      original[l++]=matrix[i][j];
      reverse[k--]=matrix[i][j];
    }
  }

  return strstr(original,str)!=NULL || strstr(reverse,str)!=NULL;

}

int main(){
  

 int rows,columns;
 cin>>rows>>columns;

 for(int i=0;i<rows;i++){
   for(int j=0;j<columns;j++){
     cin>>matrix[i][j];
   }
 }

  scanf("%s",str);

  if(presentInRange(0,0,0,columns-1)){
    cout<<"Top";
  }

  else if(presentInRange(0,columns-1,rows-1,columns-1)){
    cout<<"Right";
  }

  else if(presentInRange(rows-1,0,rows-1,columns-1)){
    cout<<"Bottom";
  }

  else if(presentInRange(0,0,rows-1,0)){
    cout<<"Left";
  }

  else{
    cout<<-1;
  }

  

}
/*

for(int i=sRow;i<=eRow;i++){
    for(int j=sCol;j<=sCol;j++){
      original[l++]=matrix[i][j];
      reverse[k--]=matrix[i][j];
    }
  }

6 7
0 6

00 01 02 03 04 05 06
10 11 12 13 14 15 16
20 21 22 23 24 25 26
30 31 32 33 34 35 36
40 41 42 43 44 45 46
50 51 52 53 54 55 56


3 4
12/3

3 6 9 12

1 2 3 4 5 6 7 8 9 10 11 12

0 0 0 1 1 1 0 0 0 1 1 1 
0 0 0 1 1 1 0 0 0 1 1 1 
0 0 0 1 1 1 0 0 0 1 1 1  
111000111000
111000111000
111000111000
000111000111
000111000111
000111000111 
111000111000
111000111000
111000111000



2 5
0 0 1 1 0 0 1 1 0 0
0 0 1 1 0 0 1 1 0 0
1 1 0 0 1 1 0 0 1 1
1 1 0 0 1 1 0 0 1 1
0 0 1 1 0 0 1 1 0 0
0 0 1 1 0 0 1 1 0 0
1 1 0 0 1 1 0 0 1 1
1 1 0 0 1 1 0 0 1 1
0 0 1 1 0 0 1 1 0 0
0 0 1 1 0 0 1 1 0 0

*/



    // if(zeroCounter==noOfRows){
    //   flag0=false;
    //   flag1=true;
    //   oneCounter=0;
    // }

    // if(oneCounter==noOfRows){
    //   flag0=true;
    //   flag1=false;
    //   zeroCounter=0;
    // }
    
    // if(flag0){
    //   cout<<zero<<" ";
    //   zeroCounter+=1;
    // }

    // if(flag1){
    //   cout<<one<<" ";
    //   oneCounter+=1;
    // }