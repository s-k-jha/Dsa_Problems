#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    string s = "abacba";
    vector<string> result;
    unordered_set<string> seen;

    int n = s.length();

    // Generate all possible substrings
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            // Extract substring from index i to j
            string sub = s.substr(i, j - i + 1);

            // Check if the substring is unique (not seen before)
            if (seen.find(sub) == seen.end()) {
                result.push_back(sub);
                seen.insert(sub);
            }
        }
    }

    // Print all unique substrings
    cout << "All unique substrings of \"" << s << "\" are:" << endl;
    for (const string& sub : result) {
        cout << sub << endl;
    }

    return 0;
}
