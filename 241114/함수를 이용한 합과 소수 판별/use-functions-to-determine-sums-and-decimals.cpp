#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool is_sum_of_digits_even(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum % 2 == 0;
}

int count_valid_primes(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; ++i) {
        if (is_prime(i) && is_sum_of_digits_even(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int a, b;
    cin >> a >> b;

    // 소수이면서 모든 자릿수의 합이 짝수인 수의 개수 세기
    int result = count_valid_primes(a, b);
    cout << result << endl;

    return 0;
}