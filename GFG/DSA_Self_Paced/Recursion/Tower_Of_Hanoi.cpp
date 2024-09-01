#include <bits/stdc++.h>

using namespace std;

//your code here

class Solution {
public:
    long long toh(int N, int from, int to, int aux) {
        if (N == 0) {
            return 0;
        }
        
        long long moves = 0;
        moves += toh(N - 1, from, aux, to);
        cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
        moves += 1;
        moves += toh(N - 1, aux, to, from);
        
        return moves;
    }
};


int main() {

    int T;
    cin >> T; // testcases
    while (T--) {

        int N;
        cin >> N; // taking input N

        // calling toh() function
        Solution ob;

        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}
