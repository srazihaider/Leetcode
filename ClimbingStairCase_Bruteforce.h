// while solving higher values time is exceeding because the processing is of O(2^n) which can increase exponentially 

class Solution {
public:
    
    
int climbStairs(int n) {
    

 if(n ==0)
    return 1;

else if (n==1)
    return 1;

else 
    return climbStairs(n-1)+climbStairs(n-2);

}

};
