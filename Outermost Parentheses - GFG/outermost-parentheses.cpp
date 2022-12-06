//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
         int i=0;

        int count=0;

        vector<long long>v;

        while(s[i]!='\0')

        {

            if(s[i]=='(')

            {

                if(count==0)

                {

                 v.push_back(i);

            // collecting index of outer parnthesis.

            //  here it is storing  this->   '('   index.

             }

                count++;

            }

            else

            {

                count--;

            }

            if(count==0)

            {

                v.push_back(i);

             // collecting index of outer parnthesis.

            //  here it is storing  this->   ')'   index.

            }

            i++;

        }

         // removing char with help for index collected .

         //must use decending order so the length change 

        // in string doesnt effect the order i. 

        for(int i=v.size()-1;i>=0;i--)

        {

            int d=v[i];

            s.erase(d,1);

        }

        return s;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends