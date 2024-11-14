#include <iostream>
#include <vector>

using namespace std;

vector<int> A;

int calculate_range_sum(int a1, int a2) {
    int sum = 0;
    for (int i = a1 - 1; i <= a2 - 1; ++i) {
        sum += A[i];
    }
    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;

    A.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    for (int i = 0; i < m; ++i) {
        int a1, a2;
        cin >> a1 >> a2;
        int result = calculate_range_sum(a1, a2);
        cout << result << endl;
    }

    return 0;
}