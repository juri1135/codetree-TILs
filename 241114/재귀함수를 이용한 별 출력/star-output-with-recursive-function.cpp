#include <iostream>

using namespace std;

void print_stars(int n, int current = 1) {
    if (current > n) {
        return;
    }
    for (int i = 0; i < current; ++i) {
        cout << "*";
    }
    cout << endl;
    print_stars(n, current + 1);
}

int main() {
    int N;
    cin >> N;
    print_stars(N);
    return 0;
}