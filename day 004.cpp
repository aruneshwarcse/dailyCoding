#include<bits/stdc++.h>
using namespace std;

int armstrongSum(int no,int count)
{
    int sum = 1;
    for(int i=0;i<count;i++)
    {
        sum*=no;
    }
    
    return sum;
}

int main()
{
    int number;
    cin>>number;
    
    int temp = number,count=0;
    while(temp != 0)
    {
        temp/=10;
        count++;
    }
    
    temp = number;
    int sum = 0;
    while(temp != 0)
    {
        sum += armstrongSum(temp%10,count); 
        temp/=10;
    }
    
    cout<<(sum==number?"YES":"NO");
    
}