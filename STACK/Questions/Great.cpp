#include <iostream>
#include <stack>
#include <string>
#include <cctype> // for toupper

using namespace std;

class Solution {
public:
    string makeGood(string s) {
        stack<char> n;
        stack<char> n1;
        string ans = "";

        if (s.length() == 0 || s.length() == 1) {
            return s;
        }

        for (char c : s) {
            n.push(c);
        }

        while (!n.empty()) {
            if (!n1.empty() && (n1.top() == toupper(n.top()) || n.top() == toupper(n1.top()))) {
                n.pop();
                n1.pop();
            } else {
                if (n1.empty()) {
                    n1.push(n.top());
                }
                n.pop();
            }
        }

        while (!n1.empty()) {
            ans += n1.top();
            n1.pop();
        }

        // reverse(ans.begin(), ans.end());

        return ans;
    }
};

int main() {
    Solution solution;

    // Test cases
    string input1 = "leEeetcode";
    string input2 = "abBAcC";
    string input3 = "Pp";

    cout << "Input: " << input1 << ", Output: " << solution.makeGood(input1) << endl;
    cout << "Input: " << input2 << ", Output: " << solution.makeGood(input2) << endl;
    cout << "Input: " << input3 << ", Output: " << solution.makeGood(input3) << endl;

    return 0;
}
