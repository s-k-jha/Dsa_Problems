#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string s;
     cout<<"**"<<"Number of Substring containing all 3 character(a,b,c) is **"<<endl;
    cout<<"### Enter the string #### "<<endl;
   
    cin>>s;
    
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        unordered_map<char, int> charCount;
        for (int j = i; j < s.length(); j++) {
            charCount[s[j]]++;
            if (charCount['a'] > 0 && charCount['b'] > 0 && charCount['c'] > 0) {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}
