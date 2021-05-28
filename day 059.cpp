#include<bits/stdc++.h>
using namespace std;

int hourGlassSum(vector<vector<int> > arr){

    int sum=INT_MIN,tmpSum=0;

    for(int i=0;i<4;++i){
        for(int j=0;j<4 ;++j){

            tmpSum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];

            if(tmpSum>sum)
                sum = tmpSum;
        }
        
    }

    return sum;

}

int main(){
    
    vector<vector<int> > arr(6);

    for(int i=0;i<6;++i){
        for(int j=0;j<6;++j){
            int temp;
            cin>>temp;

            arr[i].push_back(temp);
        }
    }

    int result = hourGlassSum(arr);
    cout<<result;
}

/*
    0 1 2 3 4 5

0   1 1 1 0 0 0
1   0 1 0 0 0 0
2   1 1 1 0 0 0
3   0 0 2 4 4 0
4   0 0 0 2 0 0
5   0 0 1 2 4 0

    0 1 2 3 4 5
*/