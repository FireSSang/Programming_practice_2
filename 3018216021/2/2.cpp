#include <bits/stdc++.h>

#define ll long long
#define mst(a, b) memset(a, b, sizeof(a))

using namespace std;
const int maxn = 10000 + 77;

int T;
string s;
int len;
int loc;

int main() {
    scanf("%d", &T);
    while (T--) {
        cin >> s;
        len = s.length();
        loc = 0;
        char temp[57];
        for (int i = 0; i < len; ++i) {
            if (s[i] == 'A' || s[i] == 'Z') {
                temp[loc++] = s[i];
            }
        }
        for (int j = 0; j < len; ++j) {
            if (s[j] == 'A' || s[j] == 'Z')
                printf("%c", temp[--loc]);
            else
                printf("%c", s[j]);
        }
        printf("\n");
    }
    return 0;
}