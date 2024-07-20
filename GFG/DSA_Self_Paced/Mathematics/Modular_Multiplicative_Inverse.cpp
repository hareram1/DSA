//{ Driver Code Starts
//Initial Template for C++

#include<iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution {
    public:
    // Function to implement Extended Euclidean Algorithm
    int extended_gcd(int a, int b, int &x, int &y) {
        if (a == 0) {
            x = 0;
            y = 1;
            return b;
        }
        int x1, y1;
        int gcd = extended_gcd(b % a, a, x1, y1);
        x = y1 - (b / a) * x1;
        y = x1;
        return gcd;
    }

    // Complete this function
    int modInverse(int a, int m) {
        if (m == 1) {
            return -1; // Inverse doesn't exist for m = 1
        }
        
        int x, y;
        int gcd = extended_gcd(a, m, x, y);
        if (gcd != 1) {
            return -1;  // Inverse doesn't exist
        } else {
            // Ensure the result is positive
            return (x % m + m) % m;
        }
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	
	//taking testcases
	cin>>T;
	while(T--){
		int a,m;
		
		//taking input a and m
		cin>>a>>m;
		Solution ob;
		//calling function modInverse()
		cout << ob.modInverse(a, m)<<endl;
	}
    return 0;
}
// } Driver Code Ends
