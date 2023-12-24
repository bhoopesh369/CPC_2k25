#include <bits/stdc++.h>
using namespace std;

int Floor(vector<int> &Arr, int num) {
    int low = 0;
    int high = Arr.size() - 1;
    int mid, ans = -1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (Arr[mid] <= num) {
            ans = Arr[mid];
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> Arr = { 1, 2, 3, 4, 6, 7, 8, 9, 10 };
    int key = 5;
    cout << Floor(Arr, key) << endl;
    return 0;
}
