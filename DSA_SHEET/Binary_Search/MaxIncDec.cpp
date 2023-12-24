#include<bits/stdc++.h>

using namespace std;

int MaxIncDec(vector<int> Arr) {
    int low = 0, high = Arr.size() - 1;
    int mid, ans = -1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (Arr[mid] > Arr[mid - 1] && Arr[mid] > Arr[mid + 1]) {
            return Arr[mid];
        }
        else if (Arr[mid] > Arr[mid - 1] && Arr[mid] < Arr[mid + 1]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> Arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 6, 5, 4, 3, 2, 1 };
    cout << MaxIncDec(Arr) << endl;
    return 0;
}
