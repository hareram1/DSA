//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


//User function Template for C++

class Solution {
    public:
    bool isPrime(int N) {
        // Handle small cases
        if (N <= 1) return false; // 0 and 1 are not prime numbers
        if (N == 2 || N == 3) return true; // 2 and 3 are prime numbers
        
        // Eliminate even numbers greater than 2
        if (N % 2 == 0) return false;

        // Check divisors from 3 up to √N
        for (int i = 3; i * i <= N; i += 2) {
            if (N % i == 0) return false; // N is divisible by i, so it's not prime
        }

        // If no divisors found, N is prime
        return true;
    }
};



int main()
{
    int T; //testcases
    cin>>T; //input testcases
    while(T--) //while testcase have not been exhausted
    {
        int N;
        cin>>N; //input n
        Solution ob;
        if(ob.isPrime(N)) 
            cout<<"Yes";
        else
            cout<<"No";
            
        cout << endl;
    }
    return 0;
}

