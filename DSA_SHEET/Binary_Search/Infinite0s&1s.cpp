#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> nums = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
    int transitionPoint = lower_bound(nums.begin(), nums.end(), 1) - nums.begin();
    cout << transitionPoint << endl;
    return 0;
}
