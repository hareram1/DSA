// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
         int D = b * b - 4 * a * c;
        
        // If the discriminant is negative, roots are imaginary
        if (D < 0) {
            return {-1};  // Imaginary
        }
        
        // Calculate the real roots
        double root1 = (-b + sqrt(D)) / (2.0 * a);
        double root2 = (-b - sqrt(D)) / (2.0 * a);
        
        // Apply floor to the roots
        int r1 = floor(root1);
        int r2 = floor(root2);
        
        // Return roots in descending order
        if (r1 >= r2) {
            return {r1, r2};
        } else {
            return {r2, r1};
        }
    }
};


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