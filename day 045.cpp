// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

//User function Template for C++
// 
class Solution {
  public:
  
    bool isPowerOfTwo(int x)
    {
     return x && (!(x&(x-1)));;
    }
    
    int power(int x, unsigned int y)
    {
        int res = 1; // Initialize result
     
        while (y > 0) {
            // If y is odd, multiply x with result
            if (y & 1)
                res = res * x;
     
            
            y = y >> 1; 
            x = x * x; 
        }
        return res;
    }
    
    long long makeItOne(long long N){
        
        long long number = N;
        long long count=0;
        
        if(isPowerOfTwo(N)){
            return log2(N);
            // exit(0);
        }
  
          while(N!=1){
              N=N-power(2, int(log2(N)));
              count++;
              
              if(isPowerOfTwo(N)){
                  return count+log2(N);
              }
              
          }
          
        return count;
        
    }
};

// class Solution {
//   public:
//     long long makeItOne(long long N){
//       long long moves = 0;
//         while(N != 1){
//             moves++; 
//             int bef=log2(N);
//             double cur=log2(N);
//             if(bef==cur)N/=2;
//             else N-=powl(2,bef);
//         }
//         return moves;
//     }
// };

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution obj;
        long long ans = obj.makeItOne(N);
        cout << ans <<'\n';
    }
    return 0;
}  // } Driver Code Ends