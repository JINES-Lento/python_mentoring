#include <bits/stdc++.h>
using namespace std;

int v[100001];
int dp[100001];

int main() {
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    dp[0] = v[0];

    int ans = v[0];
    for (int i = 1; i < n; ++i) {
        dp[i] = max(dp[i - 1] + v[i], v[i]);

        ans = max(ans, dp[i]);
    }
    cout << ans;

    return 0;
}
