#include<bits/stdc++.h>
using namespace std;


//User function Template for C++

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	// Your code here
    	 unsigned int even_bits = n & 0xAAAAAAAA;
        unsigned int odd_bits = n & 0x55555555;
        even_bits >>= 1;
        odd_bits <<= 1;
        return (even_bits | odd_bits);
    }
};

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}
