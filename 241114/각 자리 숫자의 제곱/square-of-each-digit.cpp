#include <iostream>

using namespace std;

int sum_of_squares(int n) {
    if (n == 0) {
        return 0;
    }
    int digit = n % 10;
    return (digit * digit) + sum_of_squares(n / 10);
}

int main() {
    int N;
    cin >> N;
    cout << sum_of_squares(N) << endl;
    return 0;
}
