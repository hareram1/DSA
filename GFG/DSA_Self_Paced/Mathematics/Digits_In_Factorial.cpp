//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

//User function Template for C++

class Solution{
    public:
    int digitsInFactorial(int N)
    {
        if (N == 0 || N == 1) return 1; // 0! and 1! both have 1 digit

        double digit_count = 0;
        
        // Summing up the logarithms of numbers from 2 to N
        for (int i = 2; i <= N; i++) {
            digit_count += log10(i);
        }

        // Return the number of digits, which is the floor of the sum of logs + 1
        return floor(digit_count) + 1;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling method digitsInFactorial()
        cout<<ob.digitsInFactorial(N)<<endl;
    }
    return 0;
}

// } Driver Code Ends
