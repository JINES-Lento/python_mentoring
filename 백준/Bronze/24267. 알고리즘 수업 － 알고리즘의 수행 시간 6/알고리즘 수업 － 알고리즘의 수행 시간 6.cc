/*

첫번째에서 n-2번
두번째에서 n-1번
세번째에서 n/6번

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    unsigned long long alpha;
    alpha = ((unsigned long long)n * (n - 1) * (n - 2)) / 6;

    cout << alpha << endl
         << 3;

    return 0;
}
