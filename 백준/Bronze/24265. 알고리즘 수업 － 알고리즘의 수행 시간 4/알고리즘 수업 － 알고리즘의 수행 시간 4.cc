/*

n = 7일 경우
1 | 2 3 4 5 6 7
2 | 3 4 5 6 7
3 | 4 5 6 7
4 | 5 6 7
5 | 6 7
6 | 7

반복 횟수를 수식으로 나타내보면 n(n-1)/2
따라서 항상 n(n-1)/2회 반복 실행되고 최고차항의 지수인 n^2의 시간복잡도를 가짐
O(n^2), 따라서 반복횟수인 n(n-1)/2와 2을 출력함

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
    alpha = ((unsigned long long)n * (n - 1)) / 2;

    cout << alpha << endl
         << 2;

    return 0;
}
