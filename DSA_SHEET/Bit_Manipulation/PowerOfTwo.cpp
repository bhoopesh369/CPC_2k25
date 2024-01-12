#include<bits/stdc++.h>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n == 0) {
        return false;
    }
    return (ceil(log2(n)) == floor(log2(n)));
}

int main() {
    int num = 256;
    cout << isPowerOfTwo(num) << endl;
    cout << isPowerOfTwo(num - 1) << endl;
    return 0;
}
