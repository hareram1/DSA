//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

//User-function template for C++

// Complete the function
// n: Input n
// Return True if the given number is a lucky number else return False

class Solution{
public:
    bool isLucky(int n) {
        int position = n;
        int counter = 2;
        
        while (position >= counter) {
            if (position % counter == 0) {
                return false;
            }
            position -= position / counter;
            counter++;
        }
        return true;
    }
};

signed main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        Solution obj;
        //calling isLucky() function
        if(obj.isLucky(n))
            cout<<"1\n";//printing "1" if isLucky() returns true
        else
            cout<<"0\n";//printing "0" if isLucky() returns false
    }
    
}