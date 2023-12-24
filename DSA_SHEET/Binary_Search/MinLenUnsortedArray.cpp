#include<bits/stdc++.h>

using namespace std;


pair<int, int> sol(vector<int> arr) {
    int n = arr.size();
    int s = 0, e = n - 1;

    for (s = 0; s < n - 1; s++) {
        if (arr[s] > arr[s + 1])
            break;
    }
    if (s == n - 1) return make_pair(-1, -1);


    for (e = n - 1; e > 0; e--) {
        if (arr[e] < arr[e - 1])
            break;
    }

    int max = arr[s], min = arr[s];
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    for (int i = 0; i < s; i++) {
        if (arr[i] > min) {
            s = i;
            break;
        }
    }

    for (int i = n - 1; i >= e + 1; i--) {
        if (arr[i] < max) {
            e = i;
            break;
        }
    }

    return make_pair(s, e);
}

int main() {
    vector<int> arr = { 0, 1, 15, 25, 6, 7, 30, 40, 50 };
    int n = arr.size();
    pair<int, int> p = sol(arr);
    cout << p.first << " " << p.second << endl;
    return 0;
}
