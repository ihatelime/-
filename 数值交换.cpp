#include <stdio.h>
int main() {
    int m, n, a;
    printf("�������������� m �� n���ÿո�ָ�����");
    scanf("%d %d", &m, &n);
    a = m;
    m = n;
    n = a;
    printf("%d,%d\n", m, n);
    return 0;
}
