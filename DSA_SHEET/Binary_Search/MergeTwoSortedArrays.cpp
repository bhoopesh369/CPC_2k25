#include<bits/stdc++.h>

using namespace std;

vector<int> MergeSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size(), n = nums2.size();
    int i = 0, j = 0;

    vector<int> res;

    while (i < m && j < n) {
        if (nums1[i] > nums2[j]) {
            res.push_back(nums2[j++]);
        }
        else {
            res.push_back(nums1[i++]);
        }
    }

    while (i < m) {
        res.push_back(nums1[i++]);
    }

    while (j < n) {
        res.push_back(nums2[j++]);
    }

    return res;
}


int main() {
    vector<int> nums1 = { 1, 2, 3, 10 };
    vector<int> nums2 = { 2, 5, 6 };
    vector<int> res = MergeSortedArrays(nums1, nums2);
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}
