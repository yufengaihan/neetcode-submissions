class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        bool result = false;
        unordered_set<int> seen;
        for(int num: nums)
        {
            if(!seen.contains(num))
            {
                seen.insert(num);
            }
            else
            {
                result = true;
                break;
            }
        }
        return result;
    }
};