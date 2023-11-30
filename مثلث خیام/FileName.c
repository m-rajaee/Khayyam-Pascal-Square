#include <stdio.h>
#pragma warning(disable:4996)
int n;
int f(int i, int j);
int main(){
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++) {
            printf("%d ", f(i, j));
        }
        printf("\n");
    }
}
int f(int i, int j) {
    if (i == j || j == 1)
        return 1;
        return f(i - 1, j - 1) + f(i - 1, j);
}