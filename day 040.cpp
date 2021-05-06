#include<bits/stdc++.h>
using namespace std;
// #define named(blockname) goto blockname; \
//                          blockname##_skip: if (0) \
//                          blockname:

// #define break(blockname) goto blockname##_skip;

int main(void){
  int rows,columns;
  cin>>rows>>columns;

  char matrix[rows][columns];

  for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
      cin>>matrix[i][j];
    }
  }

  int checker;
  cin>>checker;

  int firstLoopStart=0, firstLoopEnd=0, secondLoopStart=0, secondLoopEnd=0;


  // named(outer)
  bool flag = true;
  for(int i=0;i<=rows-checker;i++){
    for(int j=0;j<=columns-checker;j++){
      if((matrix[i][j]==matrix[i][j+checker-1]) && (matrix[i][j]==matrix[i+checker-1][j]) && (matrix[i+checker-1][j]==matrix[i+checker-1][j+checker-1]) ){
        // if(matrix[i+checker-1][j]==matrix[i+checker-1][j+checker-1]){
          matrix[i][j]='*';

          matrix[i+checker-1][j]='*';
          matrix[i][j+checker-1]='*';
          matrix[i+checker-1][j+checker-1]='*';


          firstLoopStart=i;
          firstLoopEnd=i+checker;
          secondLoopStart=j;
          secondLoopEnd=j+checker;

          flag = false;
          break;

          // break(outer);
        // }
      }
      if(!flag){
        break;
      }
    }
  }

  int row=firstLoopStart,col=secondLoopStart,row1=firstLoopEnd-1,col1=secondLoopStart;
  int k=0;

  while(k<checker-2){
        row++;
        col++;
        matrix[row][col]='*';
        row1--;
        col1++;
        matrix[row1][col1]='*';
        k++;

  }  

  // row=firstLoopEnd-1,col=secondLoopStart,k=0;

  // while(k<checker-2){
    
  //   row--;
  //   col++;
  //   matrix[row][col]='*';
  //   k++;
      
  // } 

  // for(int i=firstLoopStart;i<firstLoopEnd;i++){
  //   for(int j=secondLoopStart;j<secondLoopEnd;j++){
  //     cout<<matrix[i][j]<<" ";
  //   }
  //   cout<<endl; 
  // }

   for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }


}

/*

 02 03 04 05 06
 12 13 14 15 16
 22 23 24 25 26
 32 33 34 35 36
 42 43 44 45 46


a d z d o t
t * y e * b
y d c d i c
s y x v a l
b * s f * f
u a c r p c
k v z n i h

*/