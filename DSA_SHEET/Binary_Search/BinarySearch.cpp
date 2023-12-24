#include<bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> Arr, int key) {
    int n = Arr.size();
    int mid, low = 0, high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (Arr[mid] == key) {
            return mid;
        }
        else if (Arr[mid] > key) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    vector<int> Arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int key = 5;
    cout << binarySearch(Arr, key) << endl;
    return 0;
}
