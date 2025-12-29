/*

*/

#include <bits/stdc++.h>

using namespace std;

pair<int, int> dp[1001];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, t;

    dp[0] = make_pair(1, 0);
   dp[1] = make_pair(0, 1);

   for(int i = 2; i <= 40; ++i){
        dp[i] = make_pair(dp[i-1].first + dp[i-2].first , dp[i-1].second+ dp[i-2].second);
   }

   cin >> t;
   for (int i = 0; i < t; ++i){
        cin >> n;
        cout << dp[n].first << ' ' << dp[n].second << '\n';
   }




    return 0;
}
