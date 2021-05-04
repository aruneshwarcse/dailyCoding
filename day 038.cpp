#include<bits/stdc++.h>
using namespace std;


int main(){
  

 int rows,columns;
 cin>>rows>>columns;

  int matrix[rows][columns];

  for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
      cin>>matrix[i][j];
    }
  }



  for(int i=0;i<rows;i+=3){
    for(int j=0;j<columns;j+=3){
      int check[10];
      memset(check,0,sizeof(check));

      for(int rowC=i;rowC<i+3;rowC++){
        for(int colC=j;colC<j+3;colC++){
          check[matrix[rowC][colC]]+=1;
        }
      }

      int breaker=0;

      for(int rowC=1;rowC<10;rowC++){
        if(check[rowC]!=1){
          breaker=1;
        }
      }

      int val=1;

      if(breaker==0){
        for(int rowC=i;rowC<i+3;rowC++){
          for(int colC=j;colC<j+3;colC++){
              matrix[rowC][colC]=val;
              val+=1;
          }
        }
      }
      

    }
  }

  // int mat[3][3]={1,2,3,
  //               4,5,6,
  //               7,8,9};

// bool flag=true;
// int rowStart=0,rowEnd=3, colStart=0, colEnd=3;
// int colCounter=1,rowCounter=1;
// int rowBreak=rows/3;
// int colBreak=columns/3;
// int matCheck=0;
// int dummy=1;
// int check[10];
// memset(check,0,sizeof(check));
//     int print=0;

// int breaker=0;

// do{

//   for(int i=rowStart;i<rowEnd;i++){
//     for(int j=colStart;j<colEnd;j++){
//       check[matrix[i][j]]+=1;
//     }
//   }

//   for(int i=1;i<10;i++){
//     if(check[i]==1){
//         matCheck++;
//     }
//   }

//   if(matCheck==9){
//     for(int i=rowStart;i<rowEnd;i++){
//       for(int j=colStart;j<colEnd;j++){
//         matrix[i][j]=dummy++;
//       }
//     }
//   }

//   matCheck=0; 
//   dummy=1;
//   memset(check,0,sizeof(check));

  
//       if(colCounter<colBreak){
//           colCounter++;
//           colStart+=3,colEnd+=3;
//       }

//       if(colCounter==colBreak){
//         if(rowCounter!=rowBreak){
//           colCounter=0;
//         }
//         colStart=0,colEnd=3;
//         rowStart+=3, rowEnd+=3;
//         rowCounter++;
//       }

//     // if(rowCounter==rowBreak&&colCounter==colBreak){
//     //   flag=false;
//     // }
//   breaker++;
//     // cout<<print++<<" ";
//     // // print+=1;

//     cout<<breaker;

//     }while(breaker<rowBreak+colBreak);
  

 
for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }




}
/*

8 8 4 1 8 5 
4 9 7 9 7 2 
5 3 3 6 3 4 
1 7 2 6 2 3 
8 6 3 7 6 4
5 9 4 3 5 1

6 9

2 3

11 12 13
21 22 23


6 6
2 2

11 12
21 22


8 8 4 | 1 8 5
4 9 7 | 9 7 2
5 3 3 | 6 3 4
--------------
1 7 2 | 6 2 3
8 6 3 | 7 6 4
5 9 4 | 3 5 1

00 01 02 03 04 05 06 07 08
10 11 12 13 14 15 16 17 18
20 21 22 23 24 25 26 27 28
30 31 32 33 34 35
40 41 42 43 44 45
50 51 52 53 54 55
*/


