#include <stdio.h>

// 斐波那契数
long fibonacci(long n);

long r_fibonacci(long n);

int main(void) {
    printf("input a number to compute fibonacci num of this number: ");
    long n;
    while (1 != scanf("%ld", &n)) {
        while (getchar() != '\n')
            continue;
        printf("illegal input!\nplease try again: ");
    }
    printf("%ld's r fibonacci number is %ld\n", n, r_fibonacci(n));
    printf("%ld's fibonacci number is %ld\n", n, fibonacci(n));
    return 0;
}

long fibonacci(long n) {
    long d;
    if (1 == n || 2 == n)
        d = 1;
    else {
        long a = 1;
        long b = 1;
        for (long i = 3; i <= n; i++) {
            d = b;
            b = a + b;
            a = d;
            d = b; // ? ok ? ## ok!
        }
    }
    return d;
}

long r_fibonacci(long n) {
    if (n == 1 || n == 2)
        return 1;
    else
        return r_fibonacci(n - 1) + r_fibonacci(n - 2);
}
