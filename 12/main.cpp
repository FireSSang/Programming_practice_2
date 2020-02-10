#include <bits/stdc++.h>

#define ll long long
#define mst(a, b) memset(a, b, sizeof(a))

using namespace std;
const int maxn = 500 + 7;

struct student{
    int math;
    int english;
    int sum;
}stu[maxn];

bool cmp(student a, student b){
    if (a.sum == b.sum)
        return a.math > b.math;
    return a.sum > b.sum;
}

int N;

int main() {
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d%d", &stu[i].math, &stu[i].english);
        stu[i].sum = stu[i].math + stu[i].english;
    }
    sort(stu, stu + N, cmp);
    for (int i = 0; i < N; ++i) {
        printf("%d %d\n", stu[i].math, stu[i].english);
    }
    return 0;
}