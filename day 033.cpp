#include<bits/stdc++.h>
using namespace std;

int main(){
  int rows,columns;
  cin>>rows>>columns;

  char colors[rows][columns];

  for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
      cin>>colors[i][j];
    }
  }

int col=columns/2;

int leftColumn=0,rightColumn=columns-1;
char mixedColors[rows][col];
int k=0;
  for(int i=0;i<rows;i++){
    for(int j=0;j<col;j++){
      if(colors[i][leftColumn]=='R' && colors[i][rightColumn]=='R'){
        mixedColors[i][k++]='R';
        leftColumn++;
        rightColumn--;
      }

      else if(colors[i][leftColumn]=='G' && colors[i][rightColumn]=='G'){
        mixedColors[i][k++]='G';
        leftColumn++;
        rightColumn--;
      }

      else if(colors[i][leftColumn]=='B' && colors[i][rightColumn]=='B'){
        mixedColors[i][k++]='B';
        leftColumn++;
        rightColumn--;
      }

      else if((colors[i][leftColumn]=='G' && colors[i][rightColumn]=='B')  || (colors[i][leftColumn]=='B' && colors[i][rightColumn]=='G')  ){
        mixedColors[i][k++]='C';
        leftColumn++;
        rightColumn--;
      }

      else if((colors[i][leftColumn]=='R' && colors[i][rightColumn]=='B') || (colors[i][leftColumn]=='B' && colors[i][rightColumn]=='R') ){
        mixedColors[i][k++]='M';
        leftColumn++;
        rightColumn--;
      }

      else if((colors[i][leftColumn]=='R' && colors[i][rightColumn]=='G') || (colors[i][leftColumn]=='G' && colors[i][rightColumn]=='R') ){
        mixedColors[i][k++]='Y';
        leftColumn++;
        rightColumn--;
      }
    }

    k=0;
    leftColumn=0;
    rightColumn=columns-1;
  }


  for(int i=0;i<rows;i++){
    for(int j=0;j<col;j++){
      cout<<mixedColors[i][j]<<" ";
    }
    cout<<endl;
  }



}

/*
ij
00 01 02 03 04 05
10 11 12 13 14 15
20 21 22 23 24 25
30 31 32 33 34 35
40 41 42 43 44 45

*/