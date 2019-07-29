class Solution {
public:
    
    
int climbStairs(int n) {
 n++;
long double goldennumber =(1+(long double)sqrt(5))/(long double) 2;
return static_cast<int>((pow(goldennumber,n) - pow(1-goldennumber,n))/sqrt(5));
     
}

};
