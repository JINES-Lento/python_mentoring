#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int dp[505][505];
int sum[505];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; ++i) {
            cin >> sum[i];
            sum[i] += sum[i - 1];
        }

        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
                dp[i][j] = 0;

        for (int len = 2; len <= n; ++len) {
            for (int i = 1; i + len - 1 <= n; ++i) {
                int j = i + len - 1;
                dp[i][j] = INF;

                for (int k = i; k < j; ++k) {
                    dp[i][j] = min(dp[i][j],
                        dp[i][k] + dp[k + 1][j] + (sum[j] - sum[i - 1]));
                }
            }
        }

        cout << dp[1][n] << '\n';
    }
    return 0;
}
