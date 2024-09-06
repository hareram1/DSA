//{ Driver Code Starts
//Initial Template for C++


#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template

class Solution {
public:
    //Complete this function
    int digitalRoot(int n) {
        if (n == 0) return 0;
        return 1 + (n - 1) % 9;
    }
};

int main() {
	int T;
	cin>>T;//taking testcases
	while(T--)
	{
	    int n;
	    cin>>n;//taking number n
	    
	    //calling digitalRoot() function
	    Solution obj;
	    cout<<obj.digitalRoot(n)<<endl;
	    
	    
	}
	return 0;
}
