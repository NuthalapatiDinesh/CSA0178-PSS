#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2) {
        sum += i * i;
    }
    printf("Sum of squares of odd numbers: %d\n", sum);
    return 0;
}

