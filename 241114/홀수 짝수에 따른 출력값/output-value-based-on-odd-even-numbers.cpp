#include <iostream>

using namespace std;

int sum_odd(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n % 2 == 1) {
        return n + sum_odd(n - 2);
    }
    return sum_odd(n - 1);
}

int sum_even(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n % 2 == 0) {
        return n + sum_even(n - 2);
    }
    return sum_even(n - 1);
}

int main() {
    int N;
    cin >> N;
    if (N % 2 == 1) {
        cout << sum_odd(N) << endl;
    } else {
        cout << sum_even(N) << endl;
    }
    return 0;
}