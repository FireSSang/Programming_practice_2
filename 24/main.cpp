#include <bits/stdc++.h>

#define ll long long
#define mst(a, b) memset(a, b, sizeof(a))

using namespace std;
const int maxn = 50000 + 77;

int T;
int n, m;
int a[maxn];
ll ans;

int main() {
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d", &n, &m);
        ans = 0ll;
        mst(a, 0);
        for (int i = 0; i < m; ++i) {
            scanf("%d", a + i);
        }
        sort(a, a + m); // 升序排列

        for (int j = 0; j < m; ++j) {
            if (n >= a[j]) {
                ans += a[j] * (a[j] + 1) / 2;
                n -= a[j];
            } else {
                ans += (a[j] * 2 - n + 1) * n / 2;
                break;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}