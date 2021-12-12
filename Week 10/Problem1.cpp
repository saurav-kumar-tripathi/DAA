#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input_1.txt", "r", stdin);
    freopen("output_1.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector <int>(3));
    for (int i = 0; i < n; i++) {
        cin >> v[i][0];
        v[i][2] = i;
    }
    for (int i = 0;i < n;i++) {
        cin >> v[i][1];
    }
    sort(v.begin(), v.end(), [&](vector<int>& a, vector<int>& b) {
        return a[1] < b[1];
        });
    int take = 1;
    int end = v[0][1];
    vector <int> ans;
    ans.push_back(v[0][2] + 1);
    for (int i = 1; i < n; i++) {
        if (v[i][0] >= end) {
            take++;
            end = v[i][1];
            ans.push_back(v[i][2] + 1);
        }
    }
    cout << "No. of non-conflicting activities: " << take << endl << "List of selected activities: ";
    for (int i : ans)
        cout << i << ' ';
}