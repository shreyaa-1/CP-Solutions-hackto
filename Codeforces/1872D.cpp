#include <bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcmm(int a, int b) {
    return (a / gcd(a, b)) * static_cast<long long>(b);
}

long long range_sum(long long from, long long to) {
    return (to * (to + 1)) / 2 - ((from - 1) * from) / 2;
}

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    long long lcm = lcmm(x, y);
    int mi = min(x, y);

    int plus = n / x - n / lcm;
    int minus = n / y - n / lcm;

    long long result = range_sum(n - plus + 1, n) - range_sum(1, minus);

    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
