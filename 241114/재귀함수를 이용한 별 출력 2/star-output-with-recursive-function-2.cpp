#include <iostream>

using namespace std;

void print_stars(int n) {
    if (n == 0) {
        return;
    }
    for (int i = 0; i < n; ++i) {
        cout << "* ";
    }
    cout << endl;
    print_stars(n - 1);
    for (int i = 0; i < n; ++i) {
        cout << "* ";
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;
    print_stars(N);
    return 0;
}
