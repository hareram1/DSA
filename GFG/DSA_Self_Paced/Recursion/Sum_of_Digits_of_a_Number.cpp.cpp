#include <iostream>
using namespace std;

//User function Template for C++


class Solution{
  public:
    // Complete this function
    int sumOfDigits(int n)
    {
      //Your code here
        if(n<10)
    return n;
 else
    return sumOfDigits(n/10)+n%10;
        
    }
};



int main() {
	int T;
	
	//taking testcases
	cin>>T;
	while(T--)
	{
	    int n;
	    
	    //taking input n
	    cin>>n;
	    
	    //calling method sumOfDigits()
	    Solution obj;
	    cout<<obj.sumOfDigits(n)<<endl;
	    
	    
	}
	return 0;
}
