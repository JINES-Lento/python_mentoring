/*

반복 횟수를 수식으로 나타내보면 n^3
항상 n^3회 반복 실행되고 최고차항의 지수인 n^3의 시간복잡도를 가짐
O(n^3), 따라서 반복횟수인 n^3, 3을 출력함

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
    alpha = (unsigned long long)n * n * n;

    cout << alpha << endl
         << 3;

    return 0;
}
