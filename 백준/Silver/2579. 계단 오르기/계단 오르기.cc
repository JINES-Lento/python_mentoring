/*
이미 원리를 아는 문제

올라온건
두칸 한칸
혹은
두칸 두칸

1 2 10 4 5
1 0 1 1
x 1 0 1
*/

#include <bits/stdc++.h>

using namespace std;

int stair[10001];
int dp[10001];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> stair[i];
    }

    dp[0] = 0;
    dp[1] = stair[1];
    dp[2] = stair[1] + stair[2];
    dp[3] = max(stair[1] + stair[3], stair[2] + stair[3]);

    for (int i = 4; i <= n; ++i){
        dp[i] = max(dp[i-3] + stair[i-1], dp[i-2]) + stair[i];
    }


    cout << dp[n];

    return 0;
}
