#include <iostream>

using namespace std;

void print_hello_world(int n) {
    if (n == 0) {
        return;
    }
    cout << "HelloWorld" << endl;
    print_hello_world(n - 1);
}

int main() {
    int N;
    cin >> N;
    print_hello_world(N);
    return 0;
}