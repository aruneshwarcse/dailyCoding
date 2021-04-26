#include<bits/stdc++.h>
using namespace std;

#define MAX 500

int main(void){

    char url[MAX]="https://www.google.com";
    // cin>>url;
  
    for(int i=0;url[i]!='\0';i++){
        if(url[i]==' '){
            cout<<"Invalid URL";
            exit(0);
        }
    }
    int flag=0;

    if(url[0]=='h'&&url[1]=='t'&&url[2]=='t'&&url[3]=='p'&&url[4]=='s'&&url[5]==':'&&url[6]=='/'&&url[7]=='/'){
        flag=7;
    }

    else if(url[0]=='h'&&url[1]=='t'&&url[2]=='t'&&url[3]=='p'&&url[4]==':'&&url[5]=='/'&&url[6]=='/'){
        flag=6;
    }

    if(flag!=7 && flag!=6){
        cout<<"Invalid URL";
        exit(0);
    }
 
    if(flag==6){
        if(url[7]=='w'&&url[8]=='w'&&url[9]=='w'&&url[10]=='.'){
            flag=11;
        }
    }

    else if(flag==7){
        if(url[8]=='w'&&url[9]=='w'&&url[10]=='w'&&url[11]=='.'){
            flag=12;
        }
    }

    if(flag!=11&&flag!=12){
        cout<<"Invalid URL";
        exit(0);
    }

    int count=0;
    for(int i=flag;url[i]!='.';i++){
        count++;
    }

    if(count<2 || count >256){
        cout<<"Invalid URL";
        exit(0);
    }

    count=count+flag;
   
    flag=0;

    if((url[count]=='.'&&url[count+1]=='c'&&url[count+2]=='o'&&url[count+3]=='m')||(url[count]=='.'&&url[count+1]=='o'&&url[count+2]=='r'&&url[count+3]=='g')){
        flag=1;
    }

    cout<<((flag==1)?"Valid URL":"Invalid URL");

}