/* */
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