//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxIndexDiff(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return 0;

        vector<int> leftMin(n);
        vector<int> rightMax(n);

        // Fill leftMin[] such that leftMin[i] contains the minimum value from arr[0] to arr[i]
        leftMin[0] = arr[0];
        for (int i = 1; i < n; ++i) {
            leftMin[i] = min(arr[i], leftMin[i-1]);
        }

        // Fill rightMax[] such that rightMax[j] contains the maximum value from arr[j] to arr[n-1]
        rightMax[n-1] = arr[n-1];
        for (int j = n-2; j >= 0; --j) {
            rightMax[j] = max(arr[j], rightMax[j+1]);
        }

        // Traverse leftMin[] and rightMax[] to find the maximum j - i
        int i = 0, j = 0, maxDiff = 0;
        while (i < n && j < n) {
            if (leftMin[i] <= rightMax[j]) {
                maxDiff = max(maxDiff, j - i);
                ++j;
            } else {
                ++i;
            }
        }

        return maxDiff;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;

        // calling maxIndexDiff() function
        cout << ob.maxIndexDiff(nums) << endl;
    }

    return 0;
}
// } Driver Code Ends
