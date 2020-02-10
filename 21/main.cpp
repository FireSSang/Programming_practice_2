#include <bits/stdc++.h>

#define ll long long
#define mst(a, b) memset(a, b, sizeof(a))

using namespace std;
const int maxn = 10000 + 77;
const int MOD = 10000;
const double epsilon = 1e-5;

ll T, a, b;
ll res;
bool flag;

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

/*void Out(ll a) { // 输出外挂
    if (a < 0) {
        putchar('-');
        a = -a;
    }
    if (a >= 10) {
        Out(a / 10);
    }
    putchar(a % 10 + '0');
}*/

bool check() {
    if (a == 0) {
        return false;
    }
    double temp = 4 / log10(a);
    return (long double)b > temp; // a ^ b > 10000，需要前导零
}

ll pow_mod(ll aa, ll k) { // 快速幂取模
    ll ans = 1;
    aa %= MOD;
    while (k) {
        if (k % 2) ans *= aa;
        aa = (aa * aa) % MOD;
        k /= 2;
        ans %= MOD;
    }
    return ans;
}

int main() {
    T = Scan();
    while (T--) {
        a = Scan();
        b = Scan();
        flag = check();
        res = pow_mod(a, b);
        if (flag) {
            printf("%04d\n", res);
        } else {
            printf("%d\n", res);
        }
    }
    return 0;
}