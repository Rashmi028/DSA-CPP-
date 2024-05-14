#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

vector<int> palindromePairs(const vector<string>& words) {
    vector<int> result;

    for (int i = 0; i < words.size(); i++) {
        for (int j = i + 1; j < words.size(); j++) {
            string concat1 = words[i] + words[j];
            string concat2 = words[j] + words[i];
            if (isPalindrome(concat1)) {
                result.push_back(i);
                result.push_back(j);
            }
            if (isPalindrome(concat2)) {
                result.push_back(j);
                result.push_back(i);
            }
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n; // Read the size of the array

    vector<string> words(n);
    for (int i = 0; i < n; i++) {
        cin >> words[i]; // Read the array elements
    }

    vector<int> result = palindromePairs(words);

    // Print the number of palindrome pairs
    cout << result.size() / 2 << endl;

    // Sort the pair indices
    sort(result.begin(), result.end(), [](int a, int b) {
        return make_pair(a, b) < make_pair(b, a);
    });

    // Print the sorted pair indices
    cout << "[";
    for (int i = 0; i < result.size(); i += 2) {
        cout << "[" << result[i] << "," << result[i + 1] << "]";
        if (i != result.size() - 2) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}

