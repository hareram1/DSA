// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
long long factorial(int);

// User function Template for C++

class Solution{
    public:
      long long factorial(int N) {
        if (N <= 1) {
            return 1;
        }
        return N * factorial(N - 1);
    }
};

int main() {
    int T, N;
    cin >> T; // input number of testcases
    while (T--) {
        cin >> N; // input n
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0;
}