//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

//User function Template for C++

class Solution{
    public:
        int multiplicationUnderModulo(long long a,long long b)
    {
        //your code here
          long long mod = 1e9 + 7;
            long long result = (a % mod) * (b % mod) % mod;
            return result;
    }
};

int main() {
	int T;
	
	//taking testcases
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    
	    //taking input a and b
	    cin>>a>>b;
	    Solution ob;
	    //calling multiplicationUnderModulo() function
	    cout<<ob.multiplicationUnderModulo(a,b)<<endl;
	}
	return 0;
}