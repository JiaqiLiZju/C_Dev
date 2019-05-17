#include <stdio.h>
#define ROWS 3
#define COLS 4
void sum_rows(int ar[][COLS], int rows);
void sum_cols(int [][COLS], int);
int sum2d(int (* ar)[COLS], int rows);
int main(void){
    int ar[ROWS][COLS]={
        {2,4,6,3},
        {1,2,4,2},
        {1,2,4,2}
    };
    sum_rows(ar, ROWS);
    sum_cols(ar, COLS);
    printf("sum2d is %d.\n", sum2d(ar, COLS));
    return 0;
}
void sum_rows(int (* ar)[COLS], int rows){
    int sum = 0;
    for (int r=0;r<rows;r++){
        sum = 0;
        for (int c=0;c<COLS;c++){
            sum += ar[r][c];
        }
        printf("row %d sum is %d.\n", r, sum);
    }
}
void sum_cols(int (*ar)[COLS], int rows){
    int sum = 0;
    for (int c=0; c<COLS; c++){
        sum = 0;
        for (int r=0; r<rows; r++)
            sum += ar[r][c];
        printf("col %d sum is %d.\n", c, sum);
    }
}
int sum2d(int (*ar)[COLS], int rows){
    int sum = 0;
    for (int c=0; c<COLS; c++){
        for (int r=0; r<ROWS; r++)
            sum += ar[r][c];
    }
    return sum;
}