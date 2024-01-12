#include<bits/stdc++.h>

using namespace std;

[[nodiscard]] int AddTwoNumbers(int m, int n) {
    int carry = 0;
    while (n) {
        carry = (m & n);
        m = m ^ n;
        n = carry << 1;
    }
    return m;
}

int main() {
    int n = 0b00000000000000000000000000000101;
    int m = 0b00000000000000000000000000000110;
    cout << AddTwoNumbers(m, n) << "\n";
    return 0;
}
