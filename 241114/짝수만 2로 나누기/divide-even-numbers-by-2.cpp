#include <iostream>
#include <vector>

using namespace std;

void divide_even_elements(vector<int>& arr) {
    for (int& num : arr) {
        if (num % 2 == 0) {
            num /= 2;
        }
    }
}

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    divide_even_elements(arr);

    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
