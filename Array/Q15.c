// 15.Store 5 numbers in array and sort it in ascending order

#include <stdio.h>
int main() {
    int size;
    printf("enter size of array:");
    scanf("%d",&size);
    int array[size];
for(int i =0;i<size;i++){
    printf("enter number %d ",i+1);
    scanf("%d",&array[i]);
}
for(int i=0;i<size-1;i++){
    for(int j =0;j<size-1;j++){
        if(array[j]>array[j+1]){
            int temp = array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
    }
}
    printf("Sort array:");

for(int i = 0;i<size;i++){
    printf("%d ",array[i]);
}
    return 0;
}
