#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    queue<int> q;
    stack<int> s;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        q.push(x);
    }

    int now = 1;
    while (now <= n) {
        if (!q.empty() && q.front() == now) {
            q.pop();
            now++;
        }
        else if (!s.empty() && s.top() == now) {
            s.pop();
            now++;
        }
        else if (!q.empty()) {
            s.push(q.front());
            q.pop();
        }
        else {
            cout << "Sad";
            return 0;
        }
    }

    cout << "Nice";
    return 0;
}
