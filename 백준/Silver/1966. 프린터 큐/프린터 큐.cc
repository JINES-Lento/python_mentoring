#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x;
    int n, target;

    cin >> x;
    for (int j = 0; j < x; ++j) {
        cin >> n >> target;

        queue<pair<int, int>> q;

        int in;
        for (int i = 0; i < n; ++i) {
            cin >> in;
            q.push(make_pair(i, in));
        }

        int count = 0;
        while (true) {
            int idx = q.front().first;
            int now = q.front().second;
            q.pop();

            bool isMax = 1;

            for (int i = 0; i < q.size(); ++i) {
                if (q.front().second > now)
                    isMax = 0;

                q.push(q.front());
                q.pop();
            }

            if (!isMax) {
                q.push(make_pair(idx, now));
            } else {
                count++;
                if (idx == target){
                    cout << count << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
