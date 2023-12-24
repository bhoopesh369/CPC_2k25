#include<bits/stdc++.h>

using namespace std;

double MedianofTwoSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size(), n = nums2.size();
    if (m > n) {
        return MedianofTwoSortedArrays(nums2, nums1);
    }
    int low = 0, high = m;
    int i, j, maxLeft, minRight;
    while (low <= high) {
        i = low + (high - low) / 2;
        j = (m + n + 1) / 2 - i;
        maxLeft = (i == 0) ? INT_MIN : nums1[i - 1];
        minRight = (i == m) ? INT_MAX : nums1[i];
        if (maxLeft <= minRight) {
            if ((m + n) % 2 == 0) {
                if (j == 0) {
                    maxLeft = (i == 0) ? INT_MIN : nums1[i - 1];
                    minRight = (j == n) ? INT_MAX : nums2[j];
                    return (maxLeft + minRight) / 2.0;
                }
                else {
                    maxLeft = (i == 0) ? INT_MIN : nums1[i - 1];
                    minRight = (j == n) ? INT_MAX : nums2[j];
                    return (maxLeft + minRight) / 2.0;
                }
            }
            else {
                return maxLeft;
            }
        }
        else {
            high = i - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> nums1 = { 1, 2, 3, 4, 5 };
    vector<int> nums2 = { 6, 7, 8, 9, 10 };
    cout << MedianofTwoSortedArrays(nums1, nums2) << endl;
    return 0;
}
