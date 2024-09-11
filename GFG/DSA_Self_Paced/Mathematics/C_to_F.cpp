/*
// Given a temperature in celsius C. You need to convert the given temperature to Fahrenheit.

// Example 1:

    Input:
    C = 32
    Output: 89.6
    Explanation: Using the conversion 
    formula of celsius to farhenheit , it
    can be calculated that, for 32 degree
    C, the temperature in Fahrenheit = 89.6


// Example 2:

    Input:
    50
    Output: 122
    Explanation: Using the conversion 
    formulaof celsius to farhenheit, it
    can be calculated that, for 50 degree
    C, the temperature in Fahrenheit = 122.

*/


//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


//User function Template for C++

class Solution{
    public:
    
    //You need to complete this function
    double cToF(int C)
    {
        //Your code here
    double f;

    f=double(C*1.8)+32;

    return f;
    }
};

//{ Driver Code Starts.







int main()
{
    int T;//number of testcases
    int C,F;
    cin >> T; //input number of testcases
    while(T--){
        cin >> C;//input temperature in celscius
        Solution ob;
        cout << floor(ob.cToF(C)) << endl; //print the output
    }
    return 0;
}
// } Driver Code Ends
