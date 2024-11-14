#include <iostream>

using namespace std;

void modify_values(int &a, int &b) {
    if (a > b) {
        a = a * 2;
        b = b + 25;
    } else {
        b = b * 2;
        a = a + 25;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    modify_values(a, b);

    cout << a << " " << b << endl;

    return 0;
}
