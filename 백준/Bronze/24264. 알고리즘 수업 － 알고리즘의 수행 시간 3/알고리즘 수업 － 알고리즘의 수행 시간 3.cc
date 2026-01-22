/*

반복문이 중첩되어있고 중첩된 반복문은 모두 N번 동작하므로
항상 N^2회 반복 실행되고 n^2의 시간복잡도를 가짐
O(n^2), 따라서 반복횟수인 n의 제곱과 2을 출력함

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
    alpha = (unsigned long long)n * n;

    cout << alpha << endl << 2;

    return 0;
}
