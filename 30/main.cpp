#include <bits/stdc++.h>

#define ll long long
#define mst(a, b) memset(a, b, sizeof(a))

using namespace std;
const int maxn = 100 + 7;

string s;
int len;
int ans;

int main() {
    while (cin >> s) {
        len = s.length();
        ans = 0;
        for (int i = 0; i < len / 2; ++i) {
            if (s[i] != '>')
                ans++;
        }
        for (int j = len / 2; j < len; ++j) {
            if (s[j] != '<')
                ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}