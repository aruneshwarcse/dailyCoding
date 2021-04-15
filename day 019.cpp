#include<bits/stdc++.h>
using namespace std;

int main(){
    string encryptKey;
    cin>>encryptKey;
    
    char plaintext[100];
    scanf(" %[^\n]s",plaintext);
    
    for(int i=0;i<plaintext[i]!='\0';i++){
        if((plaintext[i]>='a' && plaintext[i]<='z')||(plaintext[i]>='A' && plaintext[i]<='Z')){
            
            if(plaintext[i]>='A' && plaintext[i]<='Z'){
                plaintext[i]=encryptKey[plaintext[i]-65];

            }
            else if(plaintext[i]>='a' && plaintext[i]<='z'){
                plaintext[i]=encryptKey[plaintext[i]-97]+32;
            }

        }
        cout<<plaintext[i]; 
    }    
}


