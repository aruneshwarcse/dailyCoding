#include<bits/stdc++.h>
using namespace std;

int main(void){
    char c;
    FILE *fp = fopen(__FILE__,"r");

    do{
        c = fgetc(fp);
        cout<<c;
    }while(c!=EOF);

    fclose(fp);

    return 0;
}