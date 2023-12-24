#include<bits/stdc++.h>

using namespace std;

int firstOccurence(vector<int> Arr, int key) {
    int mid, low = 0, high = Arr.size() - 1, res = -1;

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (Arr[mid] == key) {
            res = mid;
            high = mid - 1;
        }
        else if (Arr[mid] > key) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return res;
}

bool isMajority(vector<int> arr, int x)
{

    int n = arr.size();
    int i = firstOccurence(arr, x);
    if (i == -1)
        return false;

    if (((i + n / 2) <= (n - 1)) &&
        arr[i + n / 2] == x)
        return true;
    else
        return false;
}

int main() {
    vector<int> Arr = { 1, 2, 3, 4, 5, 5, 5, 5, 5, 5, 5, 7, 7 };
    int key = 5;
    cout << isMajority(Arr, key) << endl;
    cout << isMajority(Arr, 7) << endl;
    return 0;
}
