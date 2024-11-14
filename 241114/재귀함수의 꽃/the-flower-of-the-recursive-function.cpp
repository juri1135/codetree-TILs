#include <iostream>

using namespace std;

void print_sequence(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    print_sequence(n - 1);
    cout << n << " ";
}

int main() {
    int N;
    cin >> N;
    print_sequence(N);
    cout << endl;
    return 0;
}
