#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    stack<int> s;
    string str;

    int counter = 0;
    for (int i = 0; i < n; ++i) {
        cin >> str;
        for (int j = 0; j < str.length(); ++j) {
            if (!s.empty() && s.top() == str[j]) {
                s.pop();
            } else {
                s.push(str[j]);
            }
        }

        if (s.empty())
            counter++;
        
        while (!s.empty())
            s.pop();
    }

    cout << counter;

    return 0;
}
