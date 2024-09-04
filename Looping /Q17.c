// 17.Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include<stdio.h>
int main(){
    int num;
    int sum =0;
    int i = 1;
    int even=0,odd=0;
    while(i<=5){
        printf("Enter Number %d: ",i);
        scanf("%d",&num);
        
        if(num%2==0){
            even++;
        }
        else{
            odd++;
        }
        i++;
    }
    printf(" Even number : %d  Odd numbers : %d",even,odd);
}
