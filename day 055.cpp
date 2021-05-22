#include<bits/stdc++.h>
using namespace std;


char* getUniqueUnitDigits(int SIZE, int arr[]){
    int unitArray[10];

    for(int i=0;i<10;++i)
        unitArray[i] = 0;

    for(int i=0;i<SIZE;++i){
        int temp = arr[i]%10;
        unitArray[temp]++;
    }
    
    char *str;
    str = (char*)(malloc(11*sizeof(char)));
    memset(str,'\0',sizeof(str));

    int index=0;
    for(int i=9;i>=0;--i){
        if(unitArray[i]>=1){
            str[index++] = i + '0';
        }
    }

    // str = (char*)(realloc(str, strlen(str)+1));
    return str;
}

int main(void){

    int N;
    cin>>N;
    
    int arr[N];
    
    for(int i=0;i<N;++i){
        cin>>arr[i];
    }

    char *str = getUniqueUnitDigits(N, arr);
    cout<<"Unique Unit digits : "<<str;

    free(str);


}