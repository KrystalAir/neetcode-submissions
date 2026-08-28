class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       vector<int> post;
       for (auto const &tok : tokens){
            if (tok != "+" && 
                tok != "-" && 
                tok != "*" && 
                tok != "/")
                {
                    post.emplace_back(stoi(tok));
                }
            else
                {
                int a = post.back();
                post.pop_back();
                int b = post.back();
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
            post.emplace_back(val);
            }
        }
        return post.back();
    }
};
