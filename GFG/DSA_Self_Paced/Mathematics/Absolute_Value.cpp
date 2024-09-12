/*

// Example 1:

    Input:
    I = -32
    Output: 32
    Explanation: 
    The absolute value of -32 is 32.
 

// Example 2:

    Input:
    I = 45
    Output: 45
    Explanation: 
    The absolute value of 45 is 45 itself.
*/

#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution{
    public:
        int absolute(int I) {
        // Your code goes here
        if(I<0){
            I=I*(-1);
        }
        else{
            I=I*1;
        }
        return I;
    }

};

//{ Driver Code Starts.

int main() {
    int T;    // number of testcases
    cin >> T; // input number of testcases
    while (T--) {
        int I;
        cin >> I;
        Solution ob;
        cout << ob.absolute(I) << endl; // print the output
    }
    return 0;
}
// } Driver Code Ends
