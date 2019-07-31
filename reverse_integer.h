/*


#include<iostream>
#include<math.h>
using namespace std;
class Solution {
public:
    int reverse( int x) {
    int rev=0;
	while(x!=0)
	{
		int pop = x%10;
		x /= 10;
		
		if(rev>INT_MAX/10 || rev==INT_MAX/10 && pop>7) return 0;
        if(rev<INT_MIN/10 || rev==INT_MIN/10 && pop<-8) return 0;
        rev = rev*10 + pop;
	}
   	    return rev;
    }
	
   
};

I have ommitted the second condition  rev==INT_MAX/10 && pop>7 and  rev==INT_MAX/10 && pop>7 because to reach this condition
the input value which is suppose to be an integer has to exceed the range of maximum possible integer. hence the code is
simplified.

*/
class Solution {
public:
int reverse(int x) {

int rev = 0;
int pop =0;
while (x)
{
    pop = x%10;
    x/=10;
    
    if(rev > INT_MAX/10 ) return 0;
    if(rev < INT_MIN/10) return 0;
    rev = rev*10 +pop;
    
}

 return rev;   
}
};
