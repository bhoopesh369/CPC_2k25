#include<bits/stdc++.h>

using namespace std;

[[nodiscard]] int swapEveryConsecutiveOddandEvenposition(int n) {
    int mask = 0b10101010101010101010101010101010;
    int even = n & mask;
    int odd = n & (mask >> 1);
    even >>= 1;
    odd <<= 1;
    return odd | even;
}

int main() {
    int n = 0b00000000000000000000000000001011;
    cout << swapEveryConsecutiveOddandEvenposition(n) << "\n";
    return 0;
}
