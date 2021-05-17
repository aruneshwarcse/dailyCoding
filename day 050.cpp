#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    char num[1000000];
    cin>>num;

    bool flag=true;
    for (int i = 1; num[i] != '\0'; i += 2)
    {
        if (num[i] <= num[i - 1] || num[i] <= num[i + 1]){
            flag = false;
            break;
        }
        
    }

    (flag)?cout<<num<<" is Hills Number":cout<<num<<" is not Hills Number";

}
