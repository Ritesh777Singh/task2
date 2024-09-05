//23. C Program to Reverse a Number Using FOR Loop 

#include <stdio.h>
int main(){
    int num[3];
    int rev[3] = {0,0,0};
    for(int i = 0 ;i < 3 ; i++){
        printf("\nEnter Number %d : ",i+1);
        scanf("%d",&num[i]);
        for(int j = num[i];num[i]>0;num[i]=num[i]/10){
            int reminder = num[i]%10;
            rev[i] = (rev[i]*10)+reminder;
        }
        printf("Reverse %d = %d",i+1,rev[i]);
    }
}
