#include<bits/stdc++.h>

using namespace std;

[[nodiscard]] int NoOfMismatchingBits(int m, int n) {
    int res = 0;
    for (int i = 1; i <= 32; i++) {
        if ((n & 1) != (m & 1)) res++;
        n >>= 1;
        m >>= 1;
    }
    return min(res, 32 - res);
}

int main() {
    int m = 0b01000000000000000010000000101011;
    int n = 0b01000000000000000000000000101010;
    int a = NoOfMismatchingBits(m, n);
    cout << a << "\n";
    return 0;
}
