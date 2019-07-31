// this solution meets in the middle of the number rather than reversing the number totally.
// hence it reduces the time. Nevertheless the total number of digits in an int can not exceed 10 which is already too less.
// It is hence 10 vs 5 
// Please refer to the other solution which I came up as my first idea
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x==0) return true;
		if(x<0 || x%10==0) return false; // anynumber that has a zero in the end should return false
        
        int pop = 0, rev = 0;
        while(x>rev)
		{
		pop = x%10;
		
		if(rev>INT_MAX/10 || rev<INT_MIN/10)
		return false;

		rev = rev*10+pop;
        if(rev == x) return true;
        x/=10;

       
		}
		return x==rev;
        
    }
		
};
