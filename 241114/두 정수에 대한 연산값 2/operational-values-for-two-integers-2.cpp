#include <iostream>

using namespace std;

void modify_values(int &a, int &b) {
    if (a < b) {
        a += 10;
        b *= 2;
    } else {
        b += 10;
        a *= 2;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    modify_values(a, b);

    cout << a << " " << b << endl;

    return 0;
}