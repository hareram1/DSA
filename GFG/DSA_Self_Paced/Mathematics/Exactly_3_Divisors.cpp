//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
bool isPrime(int n)
{
    if(n==1)
        return false;
    if(n==2 || n==3)
        return true;
    if(n%2==0 || n%3==0)
        return false;
    for(int i=5;i*i<=n;i=i+6)
    {
        if(n%i==0 ||n%(i+2)==0)
            return false;
    }
    return true;
}

int countPrimeFactors(int n)
{
    int count = 0;
    while(n%2==0)
    {
        count++;
        n=n/2;
    }
    while(n%3==0)
    {
        count++;
        n=n/3;
    }
    for(int i=5;i*i<=n;i=i+6)
    {
        while(n%i==0)
        {
            count++;
            n=n/i;
        }
        while(n%(i+2)==0)
        {
            count++;
            n=n/(i+2);
        }
    }
    if(n>3)
        count++;
    return count;
}

class Solution{
    public:
    int exactly3Divisors(int N)
    {
        //Your code here
        if(N==1)
            return 0;
        int num = 0;
        if(N>4)
            num++;
        for(int i=3;i*i<=N;i+=2)
        {
            if(isPrime(i))
            {
                num++;
            }
        }
        return num;
    }
};


//{ Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}
// } Driver Code Ends
