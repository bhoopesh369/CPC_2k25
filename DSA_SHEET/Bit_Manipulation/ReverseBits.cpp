#include<bits/stdc++.h>

using namespace std;

[[nodiscard]] int reverseBits(int n) {
    int ans = 0;
    for (int i = 0; i < 32; i++) {
        ans <<= 1;
        ans |= (n & 1);
        n >>= 1;
    }
    return ans;
}

int main() {
    int num = 0b01000000000000000000000000000000;
    cout << reverseBits(num) << endl;
    return 0;
}
