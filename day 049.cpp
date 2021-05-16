#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    int diff=0;
    
    for(int i=1;i<=n;i++){
        diff=n-1;
        int var=i;
        for(int j=i;j<=i+count;j++){

            
            if(j==i)
                cout<<i<<" ";
                
            else{
                var+=diff;
                if(var<10){
                    cout<<" "<<var<<" ";
                }
                else{
                    cout<<" "<<var;
                }
                diff-=1;   
            }
        }
        count++;
        
        printf("\n");
    }
}


/*
6
1
2  7
3  8  12
4  9  13 16
5  10 14 17 19
6  11 15 18 20 21

*/