#include<bits/stdc++.h>

using namespace std;

[[nodiscard]] int NibbleWiseSwap(int n) {
    int mask = 0b1111;
    int first = n & mask;
    int second = n & (mask << 4);
    return (first << 4) | (second >> 4);
}

[[nodiscard]] int OptimizedNibbleWiseSwap(int n) {
    return ((n & 0b1111) << 4) | ((n & 0b11110000) >> 4);
}

int main() {
    int v = 0b00000000000000000000000000000001;
    cout << NibbleWiseSwap(v) << "\n";
    cout << OptimizedNibbleWiseSwap(v) << "\n";
    return 0;
}
