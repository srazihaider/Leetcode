// since the answers are taken from the Fibonacci series and the maximum value of int can not exceed 2,147,483,647 having values
// until 47 will cover all the possible values and would be a fast solution

class Solution {
public:
    
    
int climbStairs(int n) {
    
    
 int staticfaboseries[47]= {0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040,1346269,2178309,3524578,5702887,9227465,14930352,24157817,39088169,63245986,102334155,165580141,267914296,433494437,701408733,1134903170,1836311903};
    
    if(n==0)
    return 0;
    else
	return  staticfaboseries[n+1];;

}
     


};
