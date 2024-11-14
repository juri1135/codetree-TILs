#include <iostream>
#include <vector>

using namespace std;

int calculate_sum(vector<int>& A, int m) {
    int sum = 0;
    while (m > 1) {
        sum += A[m - 1];
        if (m % 2 == 0) {
            m /= 2;
        } else {
            m -= 1;
        }
    }
    sum += A[m - 1];
    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    int result = calculate_sum(A, m);
    cout << result << endl;

    return 0;
}