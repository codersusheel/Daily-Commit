












#include <stdio.h>
#include <math.h>

int main() {
    int n, i, isPrime = 1;
    printf("Number enter karein: ");
    scanf("%d", &n);

    if (n <= 1) isPrime = 0;

    // sqrt(n) tak check karna kaafi hota hai
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("%d Prime number hai.\n", n);
    else
        printf("%d Prime number nahi hai.\n", n);

    return 0;
}

















#include <stdio.h>

int main() {
    int n, i, flag = 0;
    printf("Ek number enter karein: ");
    scanf("%d", &n);

    // 0 aur 1 prime numbers nahi hote
    if (n <= 1) {
        flag = 1;
    }

    for (i = 2; i <= n / 2; ++i) {
        // Agar n 'i' se poora divide ho jaye
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%d ek Prime number hai.\n", n);
    else
        printf("%d Prime number nahi hai.\n", n);

    return 0;
}

