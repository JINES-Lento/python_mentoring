#include <bits/stdc++.h>
using namespace std;

vector<int> indexSort(vector<int> v, int n) {
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);

    auto compare = [&](int a, int b) { return v[a] < v[b]; };

    sort(index.begin(), index.end(), compare);

    return index;
}

vector<int> minCounter(vector<int> v, vector<int> idx, int n) {
    vector<int> result(n);
    int count = 0;
    result[idx[0]] = 0;

    for (int i = 1; i < n; ++i) {
        if (v[idx[i]] > v[idx[i - 1]])
            count++;
        result[idx[i]] = count;
    }

    return result;
}

void printVector(vector<int> v) {
    for (auto i : v) {
        cout << i << ' ';
    }
}

void printVector(vector<int> v, vector<int> idx, int n) {
    for (int i = 0; i < n; ++i) {
        cout << v[idx[i]] << ' ';
    }
}

int main() {
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n, 0);

    for (auto &i : v) {
        cin >> i;
    }

    vector<int> idx = indexSort(v, n);
    vector<int> result = minCounter(v, idx, n);

    printVector(result);

    return 0;
}
