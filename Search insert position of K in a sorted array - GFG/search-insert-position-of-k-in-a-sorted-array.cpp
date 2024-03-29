//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int K)
    {
        // code here
        int h=N-1;
        int l=0;
        while(l<=h)
        {
            int mid=(l+h)>>1;
            if(Arr[mid]==K)
            {
                return mid;
            }
            else if(Arr[mid]<K)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        return l;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends