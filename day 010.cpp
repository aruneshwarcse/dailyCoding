#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    

    sort(a,a+n);
    int c=0;
    int b[n][2];
    int k=0;
    int i=0;
    
    
    for(i=0;i<n-1;i++){
       
       if(a[i]==a[i+1]){
           c+=1;
       }
       
       else
       {
           b[k][0]=a[i];
           b[k][1]=c+1;
           k+=1;
           c=0;
       }
   }

        b[k][0]=a[i];
        b[k][1]=c+1;
        
    for(int i=0;i<=k;i++){
      cout<<b[i][0]<<" "<<b[i][1]<<endl;
  }
  cout<<endl<<endl;
        

int temp,temp2;
  for(int i=0;i<=k;i++){
      for(int j=0;j<=k-i-1;j++){
          if(b[j][1]<b[j+1][1]){
              temp=b[j][1];
              b[j][1]=b[j+1][1];
              b[j+1][1]=temp;
              
              temp2=b[j][0];
              b[j][0]=b[j+1][0];
              b[j+1][0]=temp2;
              
          }
      }
  }
  

  
  for(int i=0;i<n;i++){
        
        while(b[i][1]!=0){
            cout<<b[i][0]<<" ";
            b[i][1]--;
        }
      
  }
    
}