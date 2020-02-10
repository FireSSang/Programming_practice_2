#include <bits/stdc++.h>

#define ll long long
#define mst(a, b) memset(a, b, sizeof(a))

using namespace std;
const int maxn = 10000 + 77;

ll x, n, m;
ll res;

ll Scan() { // 输入外挂
    ll res = 0, flag = 0;
    char ch;
    if ((ch = getchar()) == '-') {
        flag = 1;
    } else if (ch >= '0' && ch <= '9') {
        res = ch - '0';
    }
    while ((ch = getchar()) >= '0' && ch <= '9') {
        res = res * 10 + (ch - '0');
    }
    return flag ? -res : res;
}

void Out(ll a) { // 输出外挂
    if (a < 0) {
        putchar('-');
        a = -a;
    }
    if (a >= 10) {
        Out(a / 10);
    }
    putchar(a % 10 + '0');
}


ll pow_mod(ll a, ll k) { // 快速幂取模
    ll ans = 1;
    a %= m;
    while (k) {
        if (k % 2) ans *= a;
        a = (a * a) % m;
        k /= 2;
        ans %= m;
    }
    return ans;
}

int main() {
    x = Scan();
    n = Scan();
    m = Scan();
    res = pow_mod(x, n);
    Out(res);
    printf("\n");
    return 0;
}