#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string A;
    cin >> A;

    if (is_palindrome(A)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
