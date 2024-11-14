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

bool is_valid_date(int M, int D) {
    if (M < 1 || M > 12 || D < 1) {
        return false;
    }
    
    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (M <= 12 && D <= days_in_month[M - 1]) {
        return true;
    }
    return false;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    if (is_valid_date(n1, n2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
