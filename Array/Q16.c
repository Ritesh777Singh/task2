// 16.Accept 5 numbers from user and perform sum of array

#include <stdio.h>
int main(){
    int num[5];
    int sum = 0;
    for(int i = 0;i<5;i++){
        printf("enter number %d : ",i+1);
        scanf("%d",&num[i]);
        sum += num[i];
    }
   printf("sum of array =  %d",sum);
}

