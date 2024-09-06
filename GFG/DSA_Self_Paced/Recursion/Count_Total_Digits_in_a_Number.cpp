//Initial Template for C++

#include <iostream>
using namespace std;


//User function Template for C++

class Solution{
  public:
    //Complete this function
	// code here
    int countDigits(int n) {
        if (n < 10) {
            return 1;
        }
        return 1 + countDigits(n / 10);
    }
};

int main() {
	int T;
	
	//taking testcases
	cin>>T;
	while(T--)
	{
	    int n;
	    
	    //taking number n
	    cin>>n;
	    
	    //calling countDigits
	    Solution obj;
	    cout<<obj.countDigits(n)<<endl;
	    
	    
	}
	return 0;
}