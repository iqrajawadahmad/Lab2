#include <stdio.h>

int main() {
    int sum = 0;
    int n;   
    printf("Enter the number of natural numbers: ");
    scanf("%d", &n);
    int i = 0;
    while (i < n) {
        int j = 1 + 2 * i;
        printf("%d\n", j);
        sum += j;
        i++;
    }
    printf("Sum is: %d\n", sum);
    return 0;
}
