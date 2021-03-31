#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main(){
    
    int row,column;
    cin>>row>>column;
    
    char arr[row][column];
    char input_char[5];
    int sum=0,temp=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>input_char;
            
            if ((input_char[0] >= 65 && input_char[0] <= 90) || (input_char[0] >= 97 && input_char[0] <= 122)){
                arr[i][j]=input_char[0];
             }
             
             else if(input_char[0] >= 48 && input_char[0] <= 57){
                stringstream s(input_char);
                s>>temp;
                sum+=temp;
             }
             
        }
    }
    
    cout<<sum<<endl;
    
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            if ((arr[j][i] >= 65 && arr[j][i] <= 90) || (arr[j][i] >= 97 && arr[j][i] <= 122)){
                cout<<arr[j][i];
             }
        }
    }
}