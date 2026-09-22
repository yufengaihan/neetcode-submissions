class Solution {
public:
    bool isPalindrome(string s) 
    {
        stack<char> a;
        bool result = true;
        for(int i =0;i<s.length();i++)
        {
            if(isalnum(s[i]))
            {
                a.push(tolower(s[i]));
            }
        }
        for(int i =0;i<s.length();i++)
        {
            if(isalnum(s[i]))
            {
            if(a.top()!=tolower(s[i]))
            {
                result = false;
            }
            else
            {
                a.pop();
            }
            }
        }
        return result;
    }
};
