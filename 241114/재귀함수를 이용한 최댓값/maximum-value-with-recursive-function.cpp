#include <iostream>
#include <vector>

using namespace std;

int find_max(const vector<int>& arr, int index) {
    if (index == 1) {
        return arr[0];
    }
    return max(arr[index - 1], find_max(arr, index - 1));
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << find_max(arr, n) << endl;
    return 0;
}
