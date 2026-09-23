class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> elements;
        vector<int> output;
        for(int num: nums)
        {
            elements[num]++;
        }
        for(int i = 0 ;i<k;i++)
        {
            int maxCount = 0;
            int maxKey = 0;
            for(auto pair: elements)
            {
                if(pair.second>maxCount)
                {
                    maxCount = pair.second;
                    maxKey = pair.first;
                }
            }
            output.push_back(maxKey);
            elements.erase(maxKey);
        }
        return output;
    }
};
