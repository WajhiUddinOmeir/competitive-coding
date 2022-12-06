//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        int i=0,n=S.size();
        string t,res="";
        while(i<n)
        {
            t="";
            while(i<n && S[i]!='.')
            {
                t.push_back(S[i]);
                i++;
            }
            res='.'+t+res;
            i++;
        }
        res.erase(0,1);
        return res;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends