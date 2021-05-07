#include<bits/stdc++.h>
using namespace std;

int* mergedEven(int M, int *arr1, int N, int *arr2){

  static int merge[100];
  for(int i=0,j=0,k=0;i<M+N;){

    merge[i++]=arr1[j];
    if(arr1[j++]%2==0){
      merge[i++]=arr2[k++];
    }
  }
  return merge;
}


int main(void){
  int sizeOfArray1;
  int sizeOfArray2;

  cin>>sizeOfArray1>>sizeOfArray2;

  int array1[sizeOfArray1], array2[sizeOfArray2];

  for(int i=0;i<sizeOfArray1;i++){
    cin>>array1[i];
  }

  for(int i=0;i<sizeOfArray2;i++){
    cin>>array2[i];
  }

  int *mergeArr = mergedEven(sizeOfArray1, array1, sizeOfArray2, array2);

  for(int i=0;i<sizeOfArray1+sizeOfArray2;i++){
    cout<<mergeArr[i]<<" ";
  }
  // delete[] mergeArr;
}