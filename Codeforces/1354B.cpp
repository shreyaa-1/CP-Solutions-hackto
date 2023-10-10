#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    map<char, int> mp;
    int ans = INT_MAX;
    int l = 0;
    int end = 0;
    int distinctCount = 0; // Count of distinct characters

    for (int i = 0; i < s.length(); i++) {
        if (mp[s[i]] == 0) {
            distinctCount++;
        } //distinct char check

        mp[s[i]]++;
        l++;

        // Reduce the subarray from the start if we have more than three distinct characters
        while (distinctCount == 3) {
            ans = min(ans, l);

            mp[s[end]]--;
            if (mp[s[end]] == 0) {
                distinctCount--;
            }

            end++;
            l--;
        }
    }

    // Check if we found a valid subarray
    if (ans == INT_MAX) {
        cout << "0" << endl;
    } else {
        cout << ans << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

