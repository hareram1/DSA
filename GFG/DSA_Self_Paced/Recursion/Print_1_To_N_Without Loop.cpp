#include <bits/stdc++.h>
using namespace std;

    class Solution{
public:
    void printNos(int N) {
        if (N <= 0) {
            return;
        }
        printNos(N - 1);
        cout << N << " ";
    }
};

/* Driver program to test printNos */
int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    
    while(T--)
    {
        int N;
        
        //input N
        cin>>N;
        Solution ob;
        //calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}