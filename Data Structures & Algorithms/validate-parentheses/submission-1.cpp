class Solution {
public:
    bool isValid(string s) {
        vector<char> check;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
                check.emplace_back(s[i]);
            }
            else {
                if (check.empty())
                    return false;
                if (s[i] == ')' && check.back() != '(')
                    return false;
                else if (s[i] == ']' && check.back() != '[')
                    return false;
                else if (s[i] == '}' && check.back() != '{')
                    return false;
                else
                    check.pop_back();
            }
        }
        return check.empty();
    }
};
