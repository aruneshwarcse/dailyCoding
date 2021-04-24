#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows,columns,n;
    cin>>rows>>columns>>n;

    int classroom[n];

    for(int i=0;i<n;i++){
        cin>>classroom[i];
    }
    
    
    int k=0;
    int seatingArrangement[rows][columns];
    int no=1;
//5 8 7
    for(int i=rows-1;i>=0;i--){
        for(int j=0;j<columns;j++){
           
                
            
            if(classroom[k]==0){
                k++;
                // j--;
                no++;
            }
            seatingArrangement[i][j]=no;
            classroom[k]-=1;
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<seatingArrangement[i][j]<<" ";
        }
        cout<<endl;
    }
    


}

/*

12 7 4 8 5 6

00 01 02 03 04 05 06
10 11 12 13 14 15 16
20 21 22 23 24 25 26
30 31 32 33 34 35 36
40 41 42 43 44 45 46
50 51 52 53 54 55 56
*/