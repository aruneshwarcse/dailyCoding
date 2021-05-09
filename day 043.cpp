#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    
    string s1,s2;
    cin>>s1;
    cin>>s2;
    
    int l1= s1.length();
    int l2= s2.length();

    l1=(l1/2);
    l2=(l2/2);

    bool flag = true;

    if(s1[l1]==s2[l2]){}

        else{
          cout<<"-1";
          exit(0);
        }

  int upper=0,lower=0;
  int u=1;
    while(flag){
        
        if((s1[l1+u]==s2[l2+u]) && (s1[l1-u]==s2[l2-u])){
            upper = l1+u;
            lower = l1-u;
            flag = true;
        }
        else{
          flag = false;
        }

        u+=1;
    }

    if(upper==0&&lower==0){
      cout<<s1[l1];
      exit(0);
    }

    for(int ch=lower;ch<=upper;ch++){
      cout<<s1[ch];
    }
    

}
