//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int exactly3Divisors(int N)
    {
        int count = 0;

    for (int i = 2; i * i <= N; i++) {
        bool isPrime = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            count++;
    }

    return count;
        
    }
};



int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        
        cin>>N;
        Solution ob;
        
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}
// } Driver Code Ends
