#include <bits/stdc++.h>
using namespace std;

int chess[50][50];

void printBoard(int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << chess[i][j] << ' ';
        }
        cout << endl;
    }
}

int wrongCount(int n, int m) {
    int start = 1;
    int now = !start;
    int bCount = 0;
    int wCount = 0;

    for (int i = n; i < (n + 8); ++i) {
        for (int j = m; j < (m + 8); ++j) {
            if (now == chess[i][j]) {
                wCount++;
            }
            now = !now;
            if (j == (m + 7)) {
                now = !now;
            }
        }
    }

    start = 0;
    now = !start;

    for (int i = n; i < (n + 8); ++i) {
        for (int j = m; j < (m + 8); ++j) {
            if (now == chess[i][j]) {
                bCount++;
            }
            now = !now;
            if (j == (m + 7)) {
                now = !now;
            }
        }
    }

    return min(bCount, wCount);
}

int main() {
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    string temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;

        for (int j = 0; j < m; ++j) {
            if (temp[j] == 'W') {
                chess[i][j] = 1;
            } else {
                chess[i][j] = 0;
            }
        }
    }

    int ans = 999999999;
    for (int i = 0; i <= (n - 8); ++i) {
        for (int j = 0; j <= (m - 8); ++j) {
            //cout << wrongCount(i, j) << endl;
            ans = min(ans, wrongCount(i, j));
        }
    }

    cout << ans;

    return 0;
}
