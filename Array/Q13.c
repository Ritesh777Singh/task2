//13.WAP to accept 5 numbers from user and check entered number is even or odd using of array

#include <stdio.h>
int main(){
    int num[5];
    for(int i = 0 ; i < 5 ; i++){
        printf("Enter Number %d : ",i+1);
        scanf("%d",&num[i]);
    }
    for(int i = 0; i<5 ; i++){
        if(num[i]%2 == 0){
            printf("Even : %d\n",num[i]);
        }
        else{
            printf("Odd : %d\n",num[i]);
        }
    }
}
