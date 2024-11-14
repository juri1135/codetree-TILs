#include <iostream>

using namespace std;

void print_ascending(int n) {
    if (n == 0) {
        return;
    }
    print_ascending(n - 1);
    cout << n << " ";
}

void print_descending(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    print_descending(n - 1);
}

int main() {
    int N;
    cin >> N;
    print_ascending(N);
    cout << endl;
    print_descending(N);
    cout << endl;
    return 0;
}
