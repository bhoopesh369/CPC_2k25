#include<bits/stdc++.h>

using namespace std;

[[nodiscard]] int Absolute_Value(int n) {
    int mask = n >> 31;
    return (n + mask) ^ mask;
}

int main() {
    int n = 0b00000000000000000000000000000010;
    cout << Absolute_Value(-n) << "\n";
    return 0;
}
