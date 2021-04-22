#include<bits/stdc++.h>
using namespace std;

int main(){

    int rows,columns;
    cin>>rows>>columns;

    char abMatrix[rows][columns];

    for(int i=0;i<rows;i++)
        for(int j=0;j<columns;j++)
            cin>>abMatrix[i][j];
      
    int noOfA[columns];
    memset(noOfA,0,columns*sizeof(noOfA[0]));
    
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            (abMatrix[i][j]=='B')?abMatrix[i][j]='-':noOfA[j]++;
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            (rows-noOfA[j]>=i+1)?abMatrix[i][j]='-':abMatrix[i][j]='A';
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<abMatrix[i][j]<<" ";
        }
        cout<<endl;
    }

    // 00 01 02 03 04
    // 10 11 12 13 14
    // 20 21 22 23 24
    // 30 31 32 33 34


    /* 
    B A A B B
    A A A B A
    B A B B A
    A A B B B

    4 4 4 4 4
    2 4 2 0 2  NOOFA
    2 0 2 4 2


    - A A - -
    A A A - A
    - A - - A
    A A - - -

    - A - - -
    - A - - -
    A A A - A
    A A A - A
    
    
    */


}