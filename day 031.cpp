#include<bits/stdc++.h>
using namespace std;

void print(char ch, int length){
    while(length>0){
        cout<<ch;
        length--;
    }
}


int main(){

    int n;
    cin>>n;
    int whiteSpace;
    int blocks;
    int areaOfInterestingPolygon = (n*2-1) + 2*(n-1)*(n-1);
    cout<<"area is "<<areaOfInterestingPolygon<<endl;
       
    for(int i=1; i<n; i++)
    {
        int whiteSpace = n-i;
        int block=(i*2)-1;
        print(' ',whiteSpace);
        print('*',block);
        cout<<endl;
        }

    for(int i=1;i<=n;i++){
        whiteSpace=i-1;
        blocks = ((n-i+1)*2)-1;
        print(' ',whiteSpace);
        print('*',blocks);  
        cout<<endl;
    }

}