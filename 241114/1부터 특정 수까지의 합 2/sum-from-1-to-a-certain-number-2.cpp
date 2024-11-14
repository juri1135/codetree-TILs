#include <iostream>

using namespace std;

int sum_recursive(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sum_recursive(n - 1);
}

int main() {
    int N;
    cin >> N;
    cout << sum_recursive(N) << endl;
    return 0;
}