// this is the 4th Approach among the solutions

class Solution {
public:
    
    
int climbStairs(int n) {

	
	int first = 1; int second = 1;

	for(int i =0;i<n-1;i++)
	{

	if(n==1 || n==0)
	return 1;

	if(n>1)
	{
		
		int temp=first+second;
		first = second;
		second = temp;
	}
	
	}
	
	return second;

}
  
};
