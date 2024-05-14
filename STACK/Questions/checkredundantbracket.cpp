//check redundant bracket

#include <bits/stdc++.h> 
using namespace std;

bool findRedundantBrackets(string &s) {
    stack<char> st;
    bool hasoperator = false; // Initialize hasoperator

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '*' || s[i] == '-' || s[i] == '+' || s[i] == '/') {
            st.push(s[i]);
        }
        else if (s[i] == ')') {
            hasoperator = false; // Reset hasoperator
            while (!st.empty() && st.top() != '(') {
                if (st.top() == '*' || st.top() == '/' || st.top() == '-' || st.top() == '+') {
                    hasoperator = true;
                }
                st.pop();
            }
            if (!hasoperator) {
                return true; // Redundant brackets found
            }
            st.pop(); // Pop '('
        }
    }

    return false; // No redundant brackets found
}