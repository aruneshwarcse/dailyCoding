#include<bits/stdc++.h>
using namespace std;

int isDigit(int ch){
    if(ch>='0' && ch<='9'){
        return ch;
    }
    else{
        return 0;
    }
}

int main(void){

    string str;
    cin>>str;

  
    int length = str.length();

    char decrypted[length];
    memset(decrypted, '\0', sizeof(decrypted));

    int idx;
    char ch;
    int i=0;
    while(str[i]!='\0'){
        
        if(isdigit(str[i])){
            idx=str[i]-48;
            ch=str[i+1];
        }

        else{
            idx=str[i+1]-48;
            ch=str[i];
        }
        // cout<<"index "<<idx<<" char "<<ch;
        decrypted[idx]=ch;
        i+=3;
    }

    for(int i=1;decrypted[i]!='\0';i++)
        cout<<decrypted[i];



}
