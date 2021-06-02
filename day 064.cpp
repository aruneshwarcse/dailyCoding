/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	//Write code here
	string virus;
	cin>>virus;

	ll len1 = virus.length();

	ll count;
	cin>>count;

	while(count--){
		string sub;

		cin>>sub;
		ll len2 = sub.length();

		ll i=0,j=0;

		while(i<len1 && j<len2){
			if(virus[i]==sub[j]){
				j++;
			}
			i++;
		}

		if(j==len2){
			cout<<"POSITIVE"<<endl;
		}
		else{
			cout<<"NEGATIVE"<<endl;
		}


	}
	
}
