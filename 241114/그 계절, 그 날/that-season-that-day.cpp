#include <iostream>

using namespace std;

bool is_leap_year(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

bool is_valid_date(int Y, int M, int D) {
    if (M < 1 || M > 12 || D < 1) {
        return false;
    }
    
    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (M == 2 && is_leap_year(Y)) {
        days_in_month[1] = 29;
    }
    
    if (D <= days_in_month[M - 1]) {
        return true;
    }
    return false;
}

string get_season(int M) {
    if (M >= 3 && M <= 5) {
        return "Spring";
    } else if (M >= 6 && M <= 8) {
        return "Summer";
    } else if (M >= 9 && M <= 11) {
        return "Fall";
    } else {
        return "Winter";
    }
}

int main() {
    int Y, M, D;
    cin >> Y >> M >> D;

    if (is_valid_date(Y, M, D)) {
        cout << get_season(M) << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
