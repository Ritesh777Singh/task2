//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            sum += j;
        }
    }
    printf("The sum of number : %d\n", sum);
    return 0;
}

