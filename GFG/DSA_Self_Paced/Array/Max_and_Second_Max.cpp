//{ Driver Code Starts
//Initial Template for C++

// CPP code to find largest and 
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
     

class Solution {
  public:
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        
        for (int i = 0; i < sizeOfArray; i++) {
            if (arr[i] > max1) {
                max2 = max1;
                max1 = arr[i];
            } else if (arr[i] > max2 && arr[i] != max1) {
                max2 = arr[i];
            }
        }
        
        if (max2 == INT_MIN) {
            max2 = -1;
        }
        
        return {max1, max2};
    }
};

//{ Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    Solution obj;
	    vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}
// } Driver Code Ends
