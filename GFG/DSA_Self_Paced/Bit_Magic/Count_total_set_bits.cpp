#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        // Your logic here
        if (n == 0)
            return 0;
        int x = largestPowerOf2(n);
        int bitsUpTo2PowX = x * (1 << (x - 1));
        int msbFrom2PowXToN = n - (1 << x) + 1;
        int remaining = n - (1 << x);
        
        return bitsUpTo2PowX + msbFrom2PowXToN + countSetBits(remaining);
    }
private:
    int largestPowerOf2(int n) {
        int x = 0;
        while ((1 << x) <= n)
            x++;
        return x - 1;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends
