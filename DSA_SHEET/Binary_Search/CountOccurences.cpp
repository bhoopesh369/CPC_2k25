#include<bits/stdc++.h>

using namespace std;

int CountOccurences(vector<int> Arr, int key) {
    int n = Arr.size();
    auto left = lower_bound(Arr.begin(), Arr.end(), key);
    auto right = upper_bound(Arr.begin(), Arr.end(), key);
    return right - left;
}

int main() {
    vector<int> Arr = { 1, 1, 1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9, 9, 9, 9 };
    cout << CountOccurences(Arr, 1) << endl;
    cout << CountOccurences(Arr, 5) << endl;
    cout << CountOccurences(Arr, 9) << endl;
    return 0;
}
