#include<bits/stdc++.h>

using namespace std;

[[nodiscard]] int findPosofOnlySetBit(int n) {
    int pos = 0;
    while (n) {
        if (n & 1) {
            return pos;
        }
        pos++;
        n >>= 1;
    }
    return -1;
}


int main() {
    int n = 0b00000000000000000000001000000000;
    cout << findPosofOnlySetBit(n) << endl;
    return 0;
}
