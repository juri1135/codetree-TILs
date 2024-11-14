#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int lcm_recursive(const vector<int>& nums, int index) {
    if (index == 1) {
        return nums[0];
    }
    return lcm(nums[index - 1], lcm_recursive(nums, index - 1));
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cout << lcm_recursive(nums, n) << endl;
    return 0;
}