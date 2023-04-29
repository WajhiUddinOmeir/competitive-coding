//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        int l=0,h=n-1;
        while(l<h)
        {
            int mid=(l+h)>>1;
            if(arr[l]<arr[h])
            {
                return arr[l];
            }
            
            if(arr[l]<arr[mid])
            {
                l=mid;
            }
            else
            {
                h=mid;
            }
        }
        return arr[l+1];
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends