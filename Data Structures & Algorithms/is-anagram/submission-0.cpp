class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        multiset<char> str1;
        bool result = false;
        for(int i =0;i<s.length();i++)
        {
            str1.insert(s[i]);
        }
        for(int i =0;i<t.length();i++)
        {
            auto it = str1.find(t[i]);
            if(it!=str1.end())
            {
                str1.erase(it);
            }
            else
            {
                return false;
            }
        }
        if(str1.empty())
        {
            result = true;
        }
        return result;
    }
};
