#include <iostream>

using namespace std;

int sequence(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    return sequence(n / 3) + sequence(n - 1);
}

int main() {
    int N;
    cin >> N;
    cout << sequence(N) << endl;
    return 0;
}