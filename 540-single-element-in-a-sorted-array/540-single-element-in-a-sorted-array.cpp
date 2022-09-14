class Solution {
public:
    int singleNonDuplicate(vector<int>& A) 
    {
        int h=A.size()-1,l=0;
	    if(h==0)
	        return A[0];
	    else if(A[l]!=A[l+1])
	        return A[l];
	    else if(A[h]!=A[h-1])
	        return A[h];
	        
	    while(l<=h)
	    {
	        int m=(l+h)/2;
	        
	        bool check=(m-h)%2==0;
	        if(A[m]==A[m-1])
	        {
	            if(check)
	            {
	                h=m-2;
	            }
	            else
	            {
	                l=m+1;
	            }
	        }
	        else if(A[m]==A[m+1])
	        {
	            if(check)
	            {
	                l=m+2;
	            }
	            else
	            {
	                h=m-1;
	            }
	        }
	        else
	        {
	            return A[m];
	        }
	    }
	    return -1;
    }
};