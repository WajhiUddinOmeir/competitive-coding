class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n=arr.size();
        vector<int> pos;
	    vector<int> nev;
	    int k;
	    for(k=0;k<n;k++)
	    {
	        if(arr[k]>=0)
	        {
	            pos.push_back(arr[k]);
	        }
	        else
	        {
	            nev.push_back(arr[k]);
	        }
	    }
	    int i=0,j=0;
	    k=0;
	    while(i<pos.size()&&j<nev.size())
	    {
	        arr[k++]=pos[i++];
	        arr[k++]=nev[j++];
	    }
	    
        return arr;
    }
};