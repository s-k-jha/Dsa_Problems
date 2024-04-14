#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> res;
    
    vector<int> v(7);

    cout << "Enter 7 integers:" << endl;
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    for (int i = 0; i < v.size(); i++) {
        int nearest_smaller = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (v[j] < v[i]) {
                nearest_smaller = v[j];
                break;
            }
        }
        res.push_back(nearest_smaller);
    }

    for (int num : res) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
