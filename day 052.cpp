#include<bits/stdc++.h>
using namespace std;

int main(void){
    
    char str[100];
    cin>>str;

    int x, y;
    cin>>x>>y;

    int nos;
    cin>>nos;

    int len=strlen(str);
    
    int left[len];
    
    for(int i=0;i<len;++i)
        left[i]=0;

    left[0]=(str[0]-'0')%x;
   
    for(int i=1;i<len;++i)
        left[i] = ((left[i-1]*10)%x + (str[i]-'0'))%x;
        
    int right[len];
    for(int i=0;i<len;++i)
        right[i]=0;
    
    right[len-1] = (str[len-1] - '0')%y;
    int power10 = 10;
    
    for (int i= len-2; i>=0; i--){
        right[i] = (right[i+1] + (str[i]-'0')*power10)%y;
        power10 = (power10 * 10) % y;
    }
    
 
    char num1[100], num2[100];
    memset(num1,'\n',sizeof(num1));
    memset(num2,'\n',sizeof(num2));
    int size1=0,size2=0;
    
    for (int i=0; i<len-1; i++){    
      if (left[i] != 0)
          continue;

      if (right[i+1] == 0){
          for (int k=0; k<=i; k++){
            num1[size1++]=str[k];
          }
      }

      for (int k=i+1; k<len; k++){
              num2[size2++]=str[k];
          }
          break;
      }


    int n1=atoi(num1);
    int n2=atoi(num2);


    int tp;

    if(n1>n2){
     tp=n1;
      n1=n2;
      n2=tp;
    }
    int c;

    if(nos==1){
        cout<<n1;
    }

    else if(nos==1){
        cout<<n2;
    }

    else{
         for(int i=2;i<nos;++i){
            c=n1+n2;
            n1 = n2;
            n2 = c; 
        }

        cout<<c;
    }
   
}



  

  
    
