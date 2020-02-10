#include <bits/stdc++.h>

#define ll long long
#define mst(a, b) memset(a, b, sizeof(a))

using namespace std;
const int maxn = 10000 + 77;

int T;
int num;
int bin_string[20];
int len;
int ans;

void solve() {
    int temp = num;
    len = 0;
    ans = 0;
    mst(bin_string, 0);
    while (temp) {
        bin_string[len++] = temp % 2;
        temp /= 2;
    }

    int x = 1;
    while(len--) {
        if(bin_string[len])
            ans += x;
        x *= 2;
    }
}

int main() {
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &num);
        solve();
        printf("%d\n", ans);
    }
    return 0;
}