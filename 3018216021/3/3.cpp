#include <bits/stdc++.h>

#define ll long long
#define mst(a, b) memset(a, b, sizeof(a))

using namespace std;
const int maxn = 10000 + 77;

int T;
int N;
int total_weight;
int stones[17];
bool flag;

void DFS(int i, int sum) {
    if (i == N)
        return;
    if (sum * 2 == total_weight) {
        flag = true;
        return;
    }
    DFS(i + 1, sum + stones[i]);
    DFS(i + 1, sum);
}

int main() {
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        total_weight = 0;
        flag = false;
        for (int i = 0; i < N; ++i) {
            scanf("%d", stones + i);
            total_weight += stones[i];
        }

        if (total_weight % 2 == 0)
            DFS(0, 0);

        if (flag) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }
    return 0;
}