#include<bits/stdc++.h>

using namespace std;

int SearchinRotated(vector<int> Arr, int key) {
    int mid, low = 0, high = Arr.size() - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (Arr[mid] == key) {
            return mid;
        }
        else if (Arr[mid] <= Arr[high]) {
            if (key > Arr[mid] && key <= Arr[high]) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        else {
            if (key >= Arr[low] && key < Arr[mid]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> Arr = { 6, 7, 8, 9, 10, 1, 2, 3, 4 };
    int key = 5;
    cout << SearchinRotated(Arr, key) << endl;
    cout << SearchinRotated(Arr, 10) << endl;
    return 0;
}
