// C++ program to find LCM of n elements
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

// Utility function to find
// GCD of 'a' and 'b'
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Returns LCM of array elements
ll findlcm(int arr[], int n)
{
    // Initialize result
    ll ans = arr[0];

    // ans contains LCM of arr[0], ..arr[i]
    // after i'th iteration,
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));

    return ans;
}


// Function to find gcd of array of
// numbers
int findGCD(int brr[], int n)
{
    int result = brr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(brr[i], result);

        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}


// Driver Code
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n],brr[m];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

     for(int i=0;i<m;i++){
        cin>>brr[i];

    }
    ll lcmm=findlcm(arr,n);
    cout<<lcmm<<endl;

    ll gcdd=findGCD(brr,m);
    cout<<gcdd<<endl;

    int countt=0;
    for(int i=lcmm;i<=gcdd;i+=lcmm){
        if(gcdd%i==0){
            countt++;
        }
    }
    cout<<countt;
    return 0;
}
