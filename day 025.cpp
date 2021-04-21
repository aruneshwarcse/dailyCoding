#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows,columns;
    cin>>rows>>columns;
    
    int boolMatrix[rows][columns];
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>boolMatrix[i][j];
        }
    }
    
    int r[rows];
    int c[columns];
    memset(r,0,rows*sizeof(r[0]));
    memset(c,0,columns*sizeof(c[0]));

   for(int i=0;i<rows;i++){
       for(int j=0;j<columns;j++){
           if(boolMatrix[i][j]==1){
               r[i]=1,c[j]=1;
           }
       }
   }
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(r[i]==1||c[j]==1){
                boolMatrix[i][j]=1;
            }
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<boolMatrix[i][j]<<" ";
        }
        cout<<endl;
    }

}