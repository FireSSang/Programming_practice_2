#include <bits/stdc++.h>

#define ll long long
#define mst(a, b) memset(a, b, sizeof(a))

using namespace std;
const int maxn = 10000 + 77;

int T;
int N;
bool isLucky;
int temp;

int Scan() { // 输入外挂
    int res = 0, flag = 0;
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

void Out(int a) { // 输出外挂
    if (a < 0) {
        putchar('-');
        a = -a;
    }
    if (a >= 10) {
        Out(a / 10);
    }
    putchar(a % 10 + '0');
}

int main() {
    T = Scan();
    while (T--) {
        N = Scan();
        for (int i = N; i >= 6; --i) {
            isLucky = true;
            temp = i;
            while (temp) {
                if (((temp % 10) != 6) && ((temp % 10) != 8)) {
                    isLucky = false;
                    break;
                }
                temp /= 10;
            }
            if (isLucky) {
                Out(i);
                printf("\n");
                break;
            }
        }
    }
    return 0;
}