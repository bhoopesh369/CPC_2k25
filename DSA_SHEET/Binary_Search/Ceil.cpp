#include<bits/stdc++.h>

using namespace std;

int Ceil(vector<int> Arr, int key) {
  int n = Arr.size();
  int mid, low = 0, high = n - 1;
  int ans = -1;

  while (low <= high) {
    mid = low + (high - low) / 2;
    if (Arr[mid] == key) {
      return Arr[mid];
    }
    else if (Arr[mid] < key) {
      low = mid + 1;
    }
    else {
      ans = Arr[mid];
      high = mid - 1;
    }
  }
  return ans;
}

int main() {
    vector<int> Arr = { 1, 2, 3, 4, 6, 7, 8, 9, 10 };
    int key = 5;
    cout << Ceil(Arr, key) << endl;
    return 0;
}
