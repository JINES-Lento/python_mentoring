#include <bits/stdc++.h>
using namespace std;

long long dp[101];

int main() {
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i < 101; ++i) {
        dp[i] = dp[i - 2] + dp[i - 3];
    }

    int n;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        int input;
        cin >> input;
        cout << dp[input - 1] << endl;
    }

    return 0;
}
