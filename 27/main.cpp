#include <bits/stdc++.h>

#define ll long long
#define mst(a, b) memset(a, b, sizeof(a))

using namespace std;
const int maxn = 150000 + 77;

int T;
string s;
char temp[maxn];
int len, newLen;
bool flag;

int main() {
    cin >> T;
    getchar();
    while (T--) {
        getline(cin, s);
        len = s.length();
        flag = true;
        newLen = 0;
        for (int i = 0; i < len; ++i) {
            if ((s[i] >= '0' && s[i] <= '9')
                || (s[i] >= 'a' && s[i] <= 'z')) // 数字字母
                temp[newLen++] = s[i];
            else if (s[i] >= 'A' && s[i] <= 'Z') // 转小写
                temp[newLen++] = char(s[i] + 32);
        }

//        for (int k = 0; k < newLen; ++k) {
//            cout << temp[k];
//        }
//        cout << endl;

        newLen--;
        for (int j = 0; j * 2 <= newLen; ++j) {
            if (temp[j] != temp[newLen - j]) {
                flag = false;
                break;
            }
        }
        if (flag)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}