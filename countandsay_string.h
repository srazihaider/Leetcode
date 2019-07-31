// this code is not fast at all at has resulted in only being faster that 25 % of the submissions. This has to be improved!!

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
