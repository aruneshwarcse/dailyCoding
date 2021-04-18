#include<bits/stdc++.h>
using namespace std;

int main(void){

    int rows,columns;
    cin>>rows>>columns;

    int arr[rows][columns];

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr[i][j];
        }
    }

    int row=0,col=0;
    bool rowInc=0;
    int mn=min(rows,columns);

    for(int len=1;len<=mn;len++){
        for(int i=0;i<len;i++){
            cout<<arr[row][col]<<" ";

            if(i+1==len){
                break;
            }

            if(rowInc){
                ++row,--col;
            }

            else{
                --row,++col;
            }
        }

    if(len==mn){
        break;
    }
    if(rowInc){
        ++row;
        rowInc=false;
    }
    else{
        ++col;
        rowInc=true;
    }

    }
    if(row==0){
        if(col==columns-1){
            ++row;
        }
        else{
            ++col;
        }
        rowInc=true;   
    }
    else{
        if(row==rows-1){
            ++col;
        }
        else{
            ++row;
        }
        rowInc=false;
    }

    int mx=max(rows,columns)-1;

    for(int len,diag=mx;diag>0;diag--){
        if(diag>mn){
            len=mn;
        }
        else{
            len=diag;
        }

        for(int i=0;i<len;i++){
            cout<<arr[row][col]<<" ";

            if(i+1==len){
                break;
            }

            if(rowInc){
                ++row,--col;
            }

            else{
                --row,++col;
            }
        }

        if(row==0||col ==columns-1){
            if(col==columns-1){
                ++row;
            }
            else{
                ++col;
            }
            rowInc=true;
        }

        else if(col==0||row==rows-1){
            if(row==rows-1){
                ++col;
            }
            else{
                ++row;
            }
            rowInc=false;
        }
    }   
}



