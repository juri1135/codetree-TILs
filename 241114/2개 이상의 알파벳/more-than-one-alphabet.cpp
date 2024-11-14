#include <iostream>
#include <string>
#include <set>

using namespace std;

bool has_multiple_unique_characters(const string& str) {
    set<char> unique_chars(str.begin(), str.end());
    return unique_chars.size() >= 2;
}

int main() {
    string A;
    cin >> A;

    if (has_multiple_unique_characters(A)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
