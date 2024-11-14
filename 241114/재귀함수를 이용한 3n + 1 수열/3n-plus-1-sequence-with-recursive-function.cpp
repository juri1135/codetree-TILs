#include <iostream>

using namespace std;

int count_steps(int n) {
    if (n == 1) {
        return 0;
    }
    if (n % 2 == 0) {
        return 1 + count_steps(n / 2);
    } else {
        return 1 + count_steps(3 * n + 1);
    }
}

int main() {
    int N;
    cin >> N;
    cout << count_steps(N) << endl;
    return 0;
}