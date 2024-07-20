//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
              vector<int> roots;
        int D = b * b - 4 * a * c; // Calculate the discriminant

        if (D < 0) {
            // Imaginary roots
            roots.push_back(-1);
        } else {
            // Real roots
            double sqrt_D = sqrt(D);
            double root1 = (-b + sqrt_D) / (2 * a);
            double root2 = (-b - sqrt_D) / (2 * a);
            int floor_root1 = floor(root1);
            int floor_root2 = floor(root2);

            // Add the roots in the required order
            if (floor_root1 >= floor_root2) {
                roots.push_back(floor_root1);
                roots.push_back(floor_root2);
            } else {
                roots.push_back(floor_root2);
                roots.push_back(floor_root1);
            }
        }
        return roots;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
