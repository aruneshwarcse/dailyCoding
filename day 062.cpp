#include<iostream>
using namespace std;

int main(void){
    int num1,num2;
    cin>>num1>>num2;

    (!(num1^num2))?cout<<"equal":cout<<"not equal";
    
}