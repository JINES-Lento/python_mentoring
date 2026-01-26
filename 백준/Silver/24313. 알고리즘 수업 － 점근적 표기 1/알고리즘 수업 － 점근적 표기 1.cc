/*

f(n) = an + b

g(n) = n

h(n) = g(n) * c

f(n) <= h(n)

첫줄에 a, b
두번째에 c
세번째에 테스트 n0

a가 음수일 경우 문제 발생,
a가 음수라면, b가 c보다 작거나 같아야 성립함
a가 양수여도 b가 c보다 크면 결과는 무조건 거짓

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, n0, h;
    cin >> a >> b;
    cin >> c;
    cin >> n0;

    h = c * n0;

    if (a * n0 + b <= h && a <= c)
        cout << 1;
    else
        cout << 0;

    return 0;
}
