#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to find longest common prefix
string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    for (int i = 0; i < strs[0].size(); i++) {
        char ch = strs[0][i]; // current character

        for (int j = 1; j < strs.size(); j++) {
            // agar string choti hai ya character match nahi hua
            if (i == strs[j].size() || strs[j][i] != ch) {
                return strs[0].substr(0, i);
            }
        }
    }
    return strs[0];
}

int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;

    vector<string> strs(n);
    cout << "Enter the words:\n";
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    string result = longestCommonPrefix(strs);

    cout << "\nLongest Common Prefix: " << result << endl;

    return 0;
}
