// This is a code that could not be run for the purposes of count and say because int becomes out of range
// with the following error for input value 9
// terminate called after throwing an instance of 'std::out_of_range'
// I am keeping this code becuase it has some useful log operations for poping the first value out of an integer

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
	string countAndSay(int n)
	{
		
		string x = "1";
		for(int i=1;i<n;i++)
		{
		   x= count(x);		
		}
		return x;
	}

	string count(string n)
	{
		char pop;int count =1;
		int i=0;
		string finalstring ="";
		cout<<n.size();
		while(!n.empty())
		{
			pop = n[0]; 
			n.erase(n.begin());
			if(n.empty())
			{
				finalstring += to_string(count)+pop;
				break;
			}
			if(pop == n[0])
			 count++;
			 else
			 {
				 finalstring += to_string(count)+pop;
				 count=1;
			 }
			i=i+1;
		}
		
		return finalstring;
	}
};
