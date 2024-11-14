#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void apply_absolute_values(vector<int>& arr) {
    for (int& num : arr) {
        num = abs(num);
    }
}

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    apply_absolute_values(arr);

    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
