#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    stack<int> s;

    int tmp;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (tmp == 0) {
            s.pop();
        } else {
            s.push(tmp);
        }
    }

    int sum = 0;
    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }

    cout << sum;

    return 0;
}
