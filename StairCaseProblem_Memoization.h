
class Solution {
public:

    
int climbStairs(int n) 
{
    
    int memo[n+1] = {0};
    memo[0]=1;
    memo[1]=1;
    int *ptr = memo;
    return bruteforce(n,ptr);
    
    
}


int bruteforce(int n, int* memo) {
    

 if(n ==0)
    return memo[0];

else if (n==1)
    return memo[1];

else if (memo[n]>0 )
     return memo[n];    
    
    else 
        memo[n]  = bruteforce(n-1,memo)+bruteforce(n-2,memo);
        return memo[n];
    

}

};
