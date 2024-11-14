#include <iostream>
#include <vector>

using namespace std;

bool is_subsequence(const vector<int>& A, const vector<int>& B) {
    int n1 = A.size();
    int n2 = B.size();
    for (int i = 0; i <= n1 - n2; ++i) {
        bool is_match = true;
        for (int j = 0; j < n2; ++j) {
            if (A[i + j] != B[j]) {
                is_match = false;
                break;
            }
        }
        if (is_match) {
            return true;
        }
    }
    return false;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> A(n1);
    vector<int> B(n2);

    for (int i = 0; i < n1; ++i) {
        cin >> A[i];
    }

    for (int i = 0; i < n2; ++i) {
        cin >> B[i];
    }

    if (is_subsequence(A, B)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
