//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        long long sumUnderModulo(long long a,long long b)
    {
        // code here
         long long mod = 1e9 + 7;
            // Compute the sum under modulo
            return (a % mod + b % mod) % mod;
        
    }
};

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
	    Solution ob;
	    cout<<ob.sumUnderModulo(a,b)<<endl;
	}
	return 0;
}
