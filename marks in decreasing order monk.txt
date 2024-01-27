#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;

multiset<pair<int, string>, greater<>> slist; 
    for (int i = 0; i < N; i++) {
        string str;
        int marks;
        cin >> str >> marks;
        slist.insert({marks, str});  // Reverse the order of elements in the pair
    }

    for (const auto& student : slist) {
        
        
        cout << student.second << " " << student.first << endl;
    }

    return 0;
}
