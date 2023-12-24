#include<bits/stdc++.h>

using namespace std;

int OptimalBinarySearch(vector<int> Arr, int key) {
  int n = Arr.size();
  int mid, low = 0, high = n - 1;

  while (high - low >= 1) {
    mid = low + (high - low) / 2;
    if (Arr[mid] <= key) {
      low = mid;
    }
    else high = mid;
  }

  if (Arr[low] == key) return low;
  if (Arr[high] == key) return high;

  return -1;
}

int main() {
  vector<int> Arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  int key = 5;
  cout << OptimalBinarySearch(Arr, key) << endl;
  return 0;
}
