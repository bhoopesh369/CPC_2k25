#include<bits/stdc++.h>

using namespace std;

[[nodiscard]] int countSetBits(int n) {
    int ans = 0;
    while (n) {
        ans += (n & 1);
        n >>= 1;
    }
    return ans;
}

int main() {
    int num = 0b01000000000000000010000000101011;
    cout << countSetBits(num) << "\n";
    cout << countSetBits(10) << "\n";
    return 0;
}
