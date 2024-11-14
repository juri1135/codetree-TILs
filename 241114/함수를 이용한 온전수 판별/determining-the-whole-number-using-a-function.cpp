#include <iostream>

using namespace std;

bool is_valid_number(int n) {
    // 온전수인지 판단하는 함수
    if (n % 2 == 0) {
        return false;
    }
    if (n % 10 == 5) {
        return false;
    }
    if (n % 3 == 0 && n % 9 != 0) {
        return false;
    }
    return true;
}

int count_valid_integers(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; ++i) {
        if (is_valid_number(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int a, b;
    cin >> a >> b;

    // 온전수의 개수 세기
    int result = count_valid_integers(a, b);
    cout << result << endl;

    return 0;
}
