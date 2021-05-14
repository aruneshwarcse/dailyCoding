#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin>>n;

    char matrix[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    
    char a,b,c,d;

    for(int row=0,col=0;row<n/2;row++,col++){

        a = matrix[row][col];
        b = matrix[row][n-1-row];
        c = matrix[n-1-row][col];
        d = matrix[n-1-row][n-1-row];


        matrix[row][col] = b;
        matrix[row][n-1-row]= d; //crt
        matrix[n-1-row][col] = a;
        matrix[n-1-row][n-1-row] = c;

    }

    // char a = matrix[0][0];
    // char b = matrix[0][n-1];
    // char c = matrix[n-1][0];
    // char d = matrix[n-1][n-1];


    // matrix[0][0] = b;
    // matrix[0][n-1]= d; //crt
    // matrix[n-1][0] = a;
    // matrix[n-1][n-1] = c;


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}