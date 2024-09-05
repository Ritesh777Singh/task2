//24. 1 + 2 + 3 + 4 + 5 + ... + n

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        if(i==num){
            printf("%d ",i);
        }
        else{
        printf("%d + ",i);
        }
    }
}
