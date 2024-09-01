#include <iostream>
using namespace std;

//User function Template for C++

class Solution{
  public:
       // Function to calculate power recursively
    int RecursivePower(int n, int p) {
        // Base case
        if (p == 0) {
            return 1;
        } else {
            // Recursive case
            return n * RecursivePower(n, p - 1);
        }
    }
};



int main() {
	int T;
	cin>>T;//testcases
	while(T--)
	{
	    int n,p;
	    
	    //taking n and p as inputs
	    cin>>n>>p;
	    
	    //calling RecursivePower() function
	    Solution obj;
	    cout<<obj.RecursivePower(n,p)<<endl;
	}
	return 0;
}