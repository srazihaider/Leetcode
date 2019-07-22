#include <vector>
#include <map>
#include <unordered_map>
#include<set>
using namespace std;
class Solution
{
public:
    Solution()
    {
    }

    vector<int> twoSum(vector<int> &nums, int target)
    {
      
        vector<int> returnvector;
        
        for (int i =0; i<nums.size();i++)
        {
           int numberneeded = target - nums[i];
            auto iter2 = requiredvalue.find(nums[i]);
            if (iter2!=requiredvalue.end())
            {
               
                returnvector.push_back(i);
                returnvector.push_back(iter2->second);
                return returnvector;
            }
            
            requiredvalue.insert(pair<int,int>(numberneeded, i));
           
        }

        return {-1, -1};
    }

private:
    unordered_map<int,int> requiredvalue;
};