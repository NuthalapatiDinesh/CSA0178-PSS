#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i * i * i;
    }

    printf("Sum of cubes of the first %d numbers: %d\n", n, sum);
    return 0;
}

