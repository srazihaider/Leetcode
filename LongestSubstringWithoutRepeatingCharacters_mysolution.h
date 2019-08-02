// I have used the recommended sliding window solution with the combination of a unordered_set or Hashset in which no duplication are allowed
// and the values are still kept in unordered formulation

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if (s.size() == 0)
			return 0;
		else if (s.size() == 1)
			return 1;

		unordered_set <char> Hashset; int maxsubstring = 0;

		int right = 1; int left = 0;
		while (right <= s.size())
		{
			auto iter = Hashset.insert(s[right-1]);
		
			if (iter.second != false)
			{
				
				maxsubstring = std::max(maxsubstring, right - left);
				++right;
			}

			else
			{
				
				Hashset.erase(s[left]);
				++left;
				

			}


		}

		return maxsubstring;
        
    }
};
