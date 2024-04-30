#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
class Solution {
public:
    long long wonderfulSubstrings(string word) {
        int n= word.size();

            int sub_arr=0;
            for (int i = 0; i < n; i++) {
                unordered_map<int, int> mp;
                for (int j = i; j < n; j++) {
                    mp[word[j]]++;
                    
                    int Count = 0;
                    for (auto ch : mp) {
                        if (ch.second % 2 != 0) {
                            Count++;
                        }
                    }
                    
                    if (Count <= 1) {
                        sub_arr++;
                    }
                }
        }
        return sub_arr;
    }
}sol;

int main(){
    string str= "aabb";
    cout<<sol.wonderfulSubstrings(str);
}
