#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows=3;
    int columns;
    cin>>columns;
    
    string alphabets[columns];
    
    
    for(int i=0;i<rows;i++){
        cin>>alphabets[i];
    }
        
    for(int i=0;i<columns;i++){
        if(alphabets[2][i]!='.'){
            if(alphabets[0][i]=='#'){
                cout<<'#';
            }
            else if(alphabets[0][i]=='.'){
                cout<<'A';
                i+=2;
            }
            else if(alphabets[1][i]=='.'){
                cout<<'I';
                i+=2;
            }
            else if(alphabets[0][i+1]=='.'){
                cout<<'U';
                i+=2;
            }
            else if(alphabets[1][i+1]=='.'){
                cout<<'O';
                i+=2;
            }
            else{
                cout<<'E';
                i+=2;
            }
        }
    }
}