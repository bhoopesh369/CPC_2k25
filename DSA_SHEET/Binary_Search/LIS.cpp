#include<bits/stdc++.h>

using namespace std;

int LengthOfLIS(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans;
    ans.push_back(nums[0]);
    for (int i = 1; i < n; i++) {
        if (nums[i] > ans.back()) {
            ans.push_back(nums[i]);
        }
        else {
            int ind = lower_bound(ans.begin(), ans.end(), nums[i]) - ans.begin();
            ans[ind] = nums[i];
        }
    }
    return ans.size();
}
int main() {
    vector<int> nums = { 10, 9, 2, 5, 3, 7, 101, 18 };
    cout << LengthOfLIS(nums) << endl;
    return 0;
}
