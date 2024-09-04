//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


//User function Template for C++

class Solution
{
public:
    vector<string> possibleWords(int a[], int N)
    {
        vector<string> keypad = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        vector<string> result;
        function<void(int, string)> backtrack = [&](int index, string current) {
            if (index == N) {
                result.push_back(current);
                return;
            }
            string letters = keypad[a[index]];
            for (char ch : letters) {
                backtrack(index + 1, current + ch);
            }
        };
        backtrack(0, "");
        return result;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends
