#include <bits/stdc++.h>
using namespace std;

int v[1001];
int dp[1001];

int main() {
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        dp[i] = 1;
    }

    dp[0] = 1;
    int ans = 1;
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j){
            if (v[j] < v[i]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
    }

    cout << ans;

    return 0;
}
