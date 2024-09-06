// 14.Perform 2D matrix array

#include <stdio.h>
int main(){
    int row_size,col_size;
    printf("Enter Number of Rows:");
    scanf("%d",&row_size);
    printf("Enter Number of Column :");
    scanf("%d",&col_size);
    int array[row_size][col_size];
    for(int row = 0; row < row_size;row++){
        for(int col=0;col < col_size;col++){
            printf("Enter row %d col %d :",row+1,col+1);
            scanf("%d",&array[row][col]);
        }
    }
    printf("2D Matrix:\n");
    for(int row = 0; row < row_size;row++){
        for(int col=0;col < col_size;col++){
            printf("%d ",array[row][col]);
        }
        printf("\n");
    }
}
