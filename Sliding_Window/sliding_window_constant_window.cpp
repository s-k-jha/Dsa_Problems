#include <iostream>
using namespace std;
int main() {
    int arr[] = {-2, 3, 1, 4, -6, 5, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int l = 0, r = k - 1, sum = 0, max_sum = 0;

    for (int i = l; i <= r; ++i) {
        sum += arr[i];
    }
    max_sum = sum; 

    while (r < n - 1) {
        sum = sum - arr[l] + arr[r + 1]; // Update sum by removing the leftmost element and adding the rightmost element
        l++;
        r++;
        max_sum = max(max_sum, sum);
    }

    cout << max_sum;

    return 0;
}
