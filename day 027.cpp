#include<bits/stdc++.h>
using namespace std;

int checkForCorona(int a[],int n){
    int days;
    while(true){
            int flag=0;
            for(int i=0;i<n;i++){
                
                if(a[i]==2){
                    if((i-1>=0)&&(a[i-1]==1)){
                        a[i-1]=2;
                        flag=1;

                    }

                    if((i+1<=n)&&(a[i+1]==1)){
                        a[i+1]=2;
                        flag=1;
                        i++;
                    }
                }
            }
            days++;

            if(flag==0){
                break;
            }   

    }
    return days;
}


int main(){
    int noOfBeds;
    cin>>noOfBeds;
    int arr[noOfBeds];

    for(int i=0;i<noOfBeds;i++){
        cin>>arr[i];
    }

    int noOfDays=0;

    noOfDays=checkForCorona(arr,noOfBeds);

    int posPeople=0;
    for(int i=0;i<noOfBeds;i++){
        if(arr[i]==1){
            posPeople+=1;
        }
    }

    cout<<noOfDays<<" "<<posPeople<<endl;

    

}


