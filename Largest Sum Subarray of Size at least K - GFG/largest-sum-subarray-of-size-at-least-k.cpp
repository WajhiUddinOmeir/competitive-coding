//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

long long int maxSumWithK(long long int a[], long long int n, long long int k);

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        cout << maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends


long long int maxSumWithK(long long int a[], long long int n, long long int k) 
{
    vector<long long int>maxsum(n);
   long long int maxi=INT_MIN;
   long long int sum=0;
   for(int i=0;i<n;i++){
       sum+=a[i];
       maxsum[i]=sum;
       if(sum<0){
           sum=0;
       }
   }
   long long int exact=0;
   for(int i=0;i<k;i++){
       exact+=a[i];
   }
   maxi=max(maxi,exact);
   for(int i=k;i<n;i++){
       exact+=a[i];
       exact-=a[i-k];
       maxi=max(maxi,exact);
       long long int at=exact+maxsum[i-k];
       maxi=max(maxi,at);
   }
   return maxi;
}