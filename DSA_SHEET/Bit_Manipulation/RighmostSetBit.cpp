#include<bits/stdc++.h>

using namespace std;

[[nodiscard]] int turnOffRightmostSetBit(int n) {
    return n & (n - 1);
}

[[nodiscard]] int positionOfRightmostSetbit(int n) {
    return log2(n & -n);
}

int main() {
    int n = 0b00000000000000000000000000000010;
    cout << turnOffRightmostSetBit(n) << "\n";
    cout << positionOfRightmostSetbit(n) << "\n";
    return 0;
}
