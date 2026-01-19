#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> cash(n);

    for (int &i : cash) {
        cin >> i;
    }

    sort(cash.rbegin(), cash.rend());

    int count = 0;
    for (int i : cash) {
        count += k / i;
        k %= i;
    }

    cout << count;

    return 0;
}
