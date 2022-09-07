class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x != 0) {
		
            int digit = x % 10;                                   // Step 1

			if( ans > (INT_MAX / 10) || ans < (INT_MIN /10)){     // Step 1.1
                return 0;
             }

			ans = (ans * 10) + digit;                             // Step 2
            
			x /= 10;                                                 // Step 3
        }
    return ans;     
        
    }
};