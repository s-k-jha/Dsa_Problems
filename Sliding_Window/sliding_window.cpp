#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int arr[] = {2, 5, 1, 7, 10};
    int k = 14;
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_len = 0;
    vector<int> result_indices;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum <= k) {
                int current_len = j - i + 1;
                if (current_len > max_len) {
                    max_len = current_len;
                    result_indices.clear();
                    for (int idx = i; idx <= j; idx++) {
                        result_indices.push_back(arr[idx]);
                    }
                }
            } else {
                break;
            }
        }
    }
    cout << "Maximum length of subarray with sum <= " << k << " is: " << max_len << endl;
    cout << "Elements of the subarray: ";
    for (int i = 0; i < result_indices.size(); i++) {
        cout << result_indices[i] << " ";
    }
    cout << endl;
    return 0;
}