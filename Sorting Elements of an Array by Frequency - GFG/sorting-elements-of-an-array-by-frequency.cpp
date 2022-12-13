
#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> e1, pair<int,int> e2)
{
    if(e1.second>e2.second)
    {
        return true;
    }
    else if(e1.second==e2.second)
    {
        if(e1.first<e2.first)
        {
            return true;
        }
        
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<int,int> mp;
        for(auto i:a)
        {
            mp[i]++;
        }
        vector<pair<int,int>> res;
        for(auto i:mp)
        {
            res.push_back(i);
        }
        sort(res.begin(),res.end(),comp);
        
        int j=0;
        for(auto it:res)
        {
            for(int i=0;i<it.second;i++)
            {
                a[j++]=it.first;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            cout<<a[i];
            if(i!=n-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
        t--;
    }
}