#include<bits/stdc++.h>

int main(){
    char input[101];
    cin>>input;
    int length;
    for (length=0;input[length]!='\0';++length);
    int num=0,flag=0;
    for(int i=length-1;i>=0;i--){
        num=input[i]-'0';
        
        if(num%2!=0){
            input[i+1]='\0';
            flag=1;
            break;
        }
    }
    
    cout<<(flag==0)?0:input;
        
    
    
}