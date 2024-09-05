#include <bits/stdc++.h>
using namespace std;



/*You are required to complete this method */

class Solution {
public:
    int josephus(int n, int k) {
        // Base case
        if (n == 1) return 1;
        
        // Recursive step
        return (josephus(n - 1, k) + k - 1) % n + 1;
    }
};




int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
