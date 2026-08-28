class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       vector<string> post;
       for (auto const &tok : tokens){
            if (tok != "+" && 
                tok != "-" && 
                tok != "*" && 
                tok != "/")
                {
                    post.emplace_back(tok);
                }
            else
                {
                int a = stoi(post.back());
                post.pop_back();
                int b = stoi(post.back());
                post.pop_back();
                int val = 0;
                switch (tok[0]){
                    case '+':
                        val = b + a;
                        break;
                    case '-':
                        val = b - a;
                        break;
                    case '*':
                        val = b * a;
                        break;
                    case '/':
                        val = b / a;
                        break;
                }
            post.emplace_back(to_string(val));
            }
        }
        return stoi(post.back());
    }
};
