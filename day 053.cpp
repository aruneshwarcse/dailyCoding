#include <bits/stdc++.h>
using namespace std;

int main() 
{

    int n;
    cin>>n;
  	// Complete the code to print the pattern.
      
    int times = n*2 -1;
    
    int array[times][times];
    
    for(int i=0;i<n;++i){
        for(int j=i;j<times-i;++j){
            array[i][j]=n-i;
            array[j][i]=n-i;
            array[j][times-1-i]=n-i;
            array[times-1-i][j]=n-i;
            
        }
    }
    
    for(int i=0;i<times;++i){
        for(int j=0;j<times;++j){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

}

/*
4
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/
