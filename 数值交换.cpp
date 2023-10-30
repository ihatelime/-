#include <stdio.h>
int main() {
    int m, n, a;
    printf("请输入两个整数 m 和 n（用空格分隔）：");
    scanf("%d %d", &m, &n);
    a = m;
    m = n;
    n = a;
    printf("%d,%d\n", m, n);
    return 0;
}
