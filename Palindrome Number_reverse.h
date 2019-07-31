#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        
        int number = x,  pop = 0, rev = 0;
		while(x)
		{

		if (x<0)
         return false;
		
		pop = x%10;
		x/=10;
		if(rev>INT_MAX/10 || rev<INT_MIN/10)
		return false;

		rev = rev*10+pop;
        
		}
		if (number==rev)
		return true;
		else 
		return false;
    }
};
