#include<bits/stdc++.h>
using namespace std;

int findMin(int a,int b, int c){
    int min=0;
    if(a<=b&&a<=c){
        min=a;
    }
    else if(b<=a&&b<=c){
        min=b;
    }
    else{
        min=c;
    }
    return min;
}

int findMax(int a,int b, int c){
    int max=0;
    if(a>=b&&a>=c){
        max=a;
    }
    else if(b>=a&&b>=c){
        max=b;
    }
    else{
        max=c;
    }
    return max;
}


int main(){
    int herbCost, carnCost, aquaCost;
    cin>>herbCost>>carnCost>>aquaCost;
    
    int maxHerb, maxCarn, maxAqua;
    cin>>maxHerb>>maxCarn>>maxAqua;
    
    int minHerb,minCarn,minAqua,minHerbArea,minCarnArea,minAquaArea;
    
    cin>>minHerb>>minHerbArea;
    cin>>minCarn>>minCarnArea;
    cin>>minAqua>>minAquaArea;
    
    int area;
    cin>>area;
    
    int minimum, maximum;
    
    minimum = findMin(herbCost,carnCost,aquaCost);
    maximum = findMax(herbCost,carnCost,aquaCost);
    
    int areasum=0;
    int cost=0;
    
    if(maximum==herbCost){
        areasum+=minHerb*minHerbArea;
        
    }
    
    else if(maximum==carnCost){
        areasum+=minCarn*minCarnArea;
    }
    else{
        areasum+=minAqua*minAquaArea;
    }
    //areasum=25
    cost=maximum*areasum;//10000*25
    
    int temp;
    
    if(minimum==herbCost){
        temp=maxHerb;
    
    }
    else if(minimum==carnCost){
        temp=maxCarn;
    }
    else{
        temp=maxAqua;
    }
    
    int temp2;
    temp2=temp*minimum;//250*1000
    cost+=temp2;
    areasum+=temp;
    
    int rem=area-areasum;//500-250-25
    
    int totalAmt=herbCost+carnCost+aquaCost;
    int remAmt=totalAmt-maximum-minimum;
    
    rem=rem*remAmt;
    cost+=rem;
    
    cout<<cost;
    
        
}