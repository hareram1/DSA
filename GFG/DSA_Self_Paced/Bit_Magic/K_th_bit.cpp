/*

//  Given a number n and a bit number k, check if kth index bit of n is set or not. A bit is called set if it is 1.
    Position of set bit '1' should be indexed starting with 0 from LSB side in binary representation of the number.
    
//  Note: Index is starting from 0. You just need to return true or false, driver code will take care of printing "Yes" and "No".
    
    Examples : 
    
//  Input: n = 4, k = 0
    Output: No
    Explanation: Binary representation of 4 is 100, in which 0th index bit from LSB is not set. So, return false.
    
//  Input: n = 4, k = 2
    Output: Yes
    Explanation: Binary representation of 4 is 100, in which 2nd index bit from LSB is set. So, return true.

  */


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k) {
        // Your code here
        // It can be a one liner logic!! Think of it!!
        if(n & (1<<k))
     return true;
     else
     return false;
    }
};

//{ Driver Code Starts.

// Driver Code
int main() {
    int t;
    cin >> t; // taking testcases
    while (t--) {
        long long n;
        cin >> n; // input n
        int k;
        cin >> k; // bit number k
        Solution obj;
        if (obj.checkKthBit(n, k))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
// } Driver Code Ends
