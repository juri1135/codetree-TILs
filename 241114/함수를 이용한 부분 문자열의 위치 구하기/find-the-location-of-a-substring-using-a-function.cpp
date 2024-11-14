#include <iostream>
#include <string>

using namespace std;

int find_substring(const string &input_str, const string &target_str) {
    size_t index = input_str.find(target_str);
    if (index != string::npos) {
        return static_cast<int>(index);
    } else {
        return -1;
    }
}

int main() {
    string input_str, target_str;
    cin >> input_str >> target_str;

    int result = find_substring(input_str, target_str);
    cout << result << endl;

    return 0;
}