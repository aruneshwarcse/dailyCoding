/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll n;
	cin>>n;

	ll a[n];

	for(ll i=0;i<n;++i)
		cin>>a[i];

	ll sum=0;
	for(ll i=0;i<n;++i)
		sum+=a[i];

	sort(a,a+n);

	ll ans=sum/n +1;
	cout<<ans;

	// for(int i=0;i<n;++i){
	// 	ans=a[i]*n;

	// 	if(ans>sum){
	// 		cout<<a[i];
	// 		break;
	// 	}
			

	// }




}