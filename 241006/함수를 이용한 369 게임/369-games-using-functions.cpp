#include <iostream>
#include <string>
using namespace std;

bool check369(int num) {
    if (num % 3 == 0) return true;  // 3의 배수인 경우
    string str = to_string(num);     // 숫자를 문자열로 변환
    for (char c : str) {
        if (c == '3' || c == '6' || c == '9') {
            return true;             // 3, 6, 9가 포함된 경우
        }
    }
    return false;
}

int func(int x, int y) {
    int ans = 0;
    for (int i = x; i <= y; i++) {
        if (check369(i)) {
            ans++;
        }
    }
    return ans;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << func(a, b);
    return 0;
}