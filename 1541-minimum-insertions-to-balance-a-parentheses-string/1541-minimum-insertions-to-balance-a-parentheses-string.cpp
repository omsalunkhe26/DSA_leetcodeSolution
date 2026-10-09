class Solution {
public:
    int minInsertions(string s) {
        int ans = 0;
        int open = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                open++;
            } 
            else {
                // If the next character is ')',
                // we have a pair "))"
                if (i + 1 < s.size() && s[i + 1] == ')') {
                    i++;
                } 
                else {
                    // Insert one ')' to make a pair
                    ans++;
                }

                // Consume one opening parenthesis
                if (open > 0) {
                    open--;
                } 
                else {
                    // Insert an opening '('
                    ans++;
                }
            }
        }

        // Every remaining '(' needs two ')'
        ans += open * 2;

        return ans;
    }
};