#include <stdio.h>

int sum(int num) {
    if (num == 0) return 0;
    return num % 10 + sum(num / 10);
}

int main() {
    int num;
    printf("enter a digit:");
    scanf("%d",&num);
    printf("Sum of digits: %d\n", sum(num));
    return 0;
}
