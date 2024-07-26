//{ Driver Code Starts
//Initial Template for C++


// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
//Your code here
vector<string> powerSet(string s) {
    vector<string> result;
    function<void(string, int)> backtrack = [&](string subset, int index) {
        result.push_back(subset);
        for (int i = index; i < s.size(); ++i) {
            backtrack(subset + s[i], i + 1);
        }
    };
    backtrack("", 0);

    return result;
}

//{ Driver Code Starts.


// Driver code
int main()
{
    int T;
    cin>>T;//testcases
    while(T--)
    {
        string s;
        cin>>s;//input string
        
        //calling powerSet() function
        vector<string> ans = powerSet(s);
        
        //sorting the result of the powerSet() function
        sort(ans.begin(),ans.end());
        
        //printing the result
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;
        
        
    }

return 0;
} 
// } Driver Code Ends
