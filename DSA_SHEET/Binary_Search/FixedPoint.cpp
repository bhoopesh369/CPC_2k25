#include<bits/stdc++.h>

using namespace std;

int FixedPoint(vector<int> Arr, int low, int high) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        if (Arr[mid] == mid) {
            return mid;
        }
        int ans = -1;
        if (Arr[high] > mid) {
            ans = FixedPoint(Arr, (mid + 1), high);
        }
        if (ans != -1) return ans;
        if (Arr[low] < mid) {
            ans = FixedPoint(Arr, low, (mid - 1));
        }
        return ans;
    }
    return -1;
}

int main() {
    vector<int> Arr = { 1, 2, 3, 3, 5, 6, 7, 8, 9 };
    cout << FixedPoint(Arr, 0, Arr.size()) << endl;
    return 0;
}
