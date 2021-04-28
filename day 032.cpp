#include <bits/stdc++.h>
using namespace std;
  
int removeDuplicate(string &s){
    string arr;
    unordered_set<char> exists;

    for(const auto&el:s)
        if(exists.insert(el).second) arr+=el;

    return arr.length();
}

int main()
{
   string str;
     cin>>str;
//    cout<<size;
//    str.erase(0,1);
   int size = str.length();
// cout<<size<<" ";
//     cout<<str<<endl;
//    cout << removeDuplicate(str, size);

   int totalCount = 0;

    string leftStr=str;
    string rightStr=str;
         
        //  reverse(leftStr.begin(), leftStr.end());
        //  cout<<leftStr;
    int loopcount = size-1;
    int leftMinima=0, leftMaxima=size-1;
    int rightMinima=0, rightMaxima=1;
    int leftSize=0,rightSize=0;
   //  int ls=0,rs=0;

    //   leftStr.erase(leftMinima,leftMaxima-1);
    //   cout<<leftStr;
   while(loopcount!=0){

        reverse(leftStr.begin(), leftStr.end());
        leftStr.erase(leftMinima,leftMaxima);
        leftMaxima--;
      //   ls=leftStr.length();
        leftSize=removeDuplicate(leftStr);
      //   leftSize = leftStr.length();

        rightStr.erase(rightMinima,rightMaxima);
        rightMaxima++;
      //   rs=rightStr.length();
        rightSize=removeDuplicate(rightStr);
      //   rightSize=rightStr.length();

        if(leftSize==rightSize){
            totalCount+=1;
        }

        leftStr=str;
        rightStr=str;
        loopcount--;
       
  }

  cout<<totalCount;
   return 0;
}
